#include "mainwindow.h"
#include "ui_mainwindow.h"


#define _GNU_SOURCE    // includes _BSD_SOURCE for DT_UNKNOWN etc.
#include <dirent.h>
#include <stdint.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>



MainWindow::MainWindow(std::string path, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //setup some police
    QFont f1 = QFont("MS Shell Dlg 2", 10);
    f1.setUnderline(true);
    QFont f2 = QFont("MS Shell Dlg 2", 8);
    f2.setBold(true);

    //find the root path of the tne project
    char buffer[MAX_PATH];
#ifdef WIN32
    GetModuleFileNameA(NULL, buffer, MAX_PATH);
#else
    strcpy(buffer, path.c_str());
#endif
    std::cout << buffer << std::endl;


    
    char * c = strstr(buffer, "tne_project")+12;
    *c = '\0';
    root_path = buffer;
    ui->lineEdit_rootPath->setText(QString::fromStdString(root_path));
    ui->lineEdit_rootPath->setMinimumWidth(500);

    //find the folder and the plugins of the project
    std::vector<std::string> v;
    get_dir(root_path,project_folders);
    for (std::vector<std::string>::iterator it = project_folders.begin() ; it != project_folders.end(); ++it)
    {
        if(it->c_str()[0] == '.' || it->compare("docs")==0)
            project_folders.erase (it--);
        else
        {
            get_dir(root_path+(*it)+SEP_PATH,v);
            for (std::vector<std::string>::iterator it2 = v.begin() ; it2 != v.end(); ++it2)
                if(it2->c_str()[0] == '.' || it2->compare("docs")==0 || it2->compare("lsl_manager")==0 || it2->compare("lsl_managerWeb")==0)
                    v.erase (it2--);
            project_pluggins.push_back(v);

        }
    }

    //get the executable file of all the project if it exist
    for (int i = 0; i< project_folders.size(); i++)
    {
        std::vector<std::string> w;
        project_path.push_back(w);
        project_args.push_back(w);
        for (int j = 0; j< project_pluggins[i].size(); j++)
        {
            project_path[i].push_back("none");
            project_args[i].push_back("");
            get_dir(root_path+project_folders[i]+SEP_PATH+project_pluggins[i][j]+SEP_PATH+"bin",v);
            if(v.size()>0)
            {
                get_dir(root_path+project_folders[i]+SEP_PATH+project_pluggins[i][j]+SEP_PATH+"bin"+SEP_PATH+OS+SEP_PATH,v);
                for(int k =0; k< v.size(); k++)
                    if(v[k].compare(".")!=0 && v[k].compare("..")!=0)
                        project_path[i][j] = root_path+project_folders[i]+SEP_PATH+project_pluggins[i][j] + SEP_PATH +"bin"+SEP_PATH+OS+SEP_PATH+ v[k] + SEP_PATH +project_pluggins[i][j] + ext_OS;
            }

        }
    }


    //GUI building
    QFrame* line = new QFrame();
    line->setGeometry(QRect(/* ... */));
    line->setFrameShape(QFrame::HLine); // Replace by VLine for vertical line
    line->setFrameShadow(QFrame::Sunken);

    for(int i =0; i<project_folders.size(); i++)
    {
        //space line
        QFrame* line = new QFrame();
        line->setGeometry(QRect(/* ... */));
        line->setFrameShape(QFrame::HLine); // Replace by VLine for vertical line
        line->setFrameShadow(QFrame::Sunken);
        ui->layout_project->addWidget(line);

        QLabel *title = new QLabel(QString::fromStdString(project_folders[i]));
        title->setFont(f1);
        ui->layout_project->addWidget(title);

        std::vector<QLineEdit*> q;
        project_line_args.push_back(q);
        project_line_path.push_back(q);


        for(int j =0; j<project_pluggins[i].size(); j++)
        {
            QHBoxLayout *a = new QHBoxLayout();

            QLineEdit *path = new QLineEdit(QString::fromStdString(project_path[i][j]));
            project_line_path[i].push_back(path);

            QLineEdit *arg_edit = new QLineEdit(QString::fromStdString(project_args[i][j]));
            project_line_args[i].push_back(arg_edit);
            arg_edit->setMaximumWidth(200);

            QLabel *lab = new QLabel(QString::fromStdString("  " +project_pluggins[i][j]));
            lab->setFont(f2);
            lab->setMinimumWidth(200);

            QLabel *arg = new QLabel("  arg.:");
            arg->setAlignment(Qt::AlignLeft);

            QPushButton *b = new QPushButton("build");
            connect(b, &QPushButton::clicked,  [this, i, j]() {this->build(i, j); } ); //use a lambda function
            b->setMaximumWidth(50);

            QPushButton *p = new QPushButton("run");
            connect(p, &QPushButton::clicked, [this, i, j]() {this->launch(i, j); } );

            a->addWidget(lab);
            a->addWidget(b);
            a->addWidget(path);
            a->addWidget(arg);
            a->addWidget(arg_edit);
            a->addWidget(p);
            ui->layout_project->addLayout(a);
        }
    }






}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief MainWindow::get_dir get the list of the directories present at the given path.
 * @param path path of the dir to look inside
 * @param dir reference to the vector of string that will be filled with the directories that are in the path.
 */
void MainWindow::get_dir(std::string path, std::vector<std::string>& dir)
{
#ifndef WIN32
    path = QDir(QString::fromStdString(path)).absolutePath().toStdString();
#endif
    dir.clear();
    DIR *d;
    struct dirent *ent;
    if ((d = opendir (path.c_str())) != NULL)
    {
        /* print all the files and directories within directory */
        while ((ent = readdir (d)) != NULL)
        {
#ifdef _DIRENT_HAVE_D_TYPE
            if(ent->d_type == 4)
                dir.push_back(ent->d_name);
#else
           struct stat stbuf;
           stat((path + ent->d_name).c_str(), &stbuf);
           if(S_ISDIR(stbuf.st_mode))
               dir.push_back(ent->d_name);
#endif
        }

        closedir (d);
    }
    else
    {
        std::cout << "could not open directory: " << path.c_str()<< std::endl;
    }
}

/**
 * @brief MainWindow::is_there Return true if the file give is found at the given path.
 * @param path Path to search in.
 * @param file File to find.
 * @return true if found.
 */
bool MainWindow::is_there(std::string path, std::string file)
{
    DIR *d;
    struct dirent *ent;
    if ((d = opendir (path.c_str())) != NULL)
    {
        /* print all the files and directories within directory */
        while ((ent = readdir (d)) != NULL)
        {
            if(file.compare(ent->d_name)==0)
            {
                closedir (d);
                return true;
            }
        }
        closedir (d);
    }
    else
    {
        std::cout << "could not open directory"<< std::endl;
    }
    return false;
}

/**
 * @brief MainWindow::launch launch the plugging link to the given coordinate (folder, pluggin).
 * @param folder Folder of the pluggin.
 * @param pluggin Pluggin to launch.
 */
void MainWindow::launch(int folder, int pluggin)
{

    std::vector<std::string> v;
#ifdef WIN32
    std::string command;
    command = "cd "+ root_path+project_folders[folder]+"\\"+project_pluggins[folder][pluggin] + " && ";
    command += "start cmd /k "+ project_line_path[folder][pluggin]->text().toStdString() + " " + project_line_args[folder][pluggin]->text().toStdString();
#else
    std::string command;
    command = "cd "+ root_path+project_folders[folder]+SEP_PATH+project_pluggins[folder][pluggin] + " && ";
    command += "gnome-terminal -x sh -c '/" + project_line_path[folder][pluggin]->text().toStdString() + " " + project_line_args[folder][pluggin]->text().toStdString() + "; exec bash'";
#endif

    std::cout << command << std::endl;
    std::system(command.c_str());
}

/**
 * @brief MainWindow::build build the plugging link to the given coordinate (folder, pluggin).
 * @param folder Folder of the pluggin.
 * @param pluggin Pluggin to launch.
 */
void MainWindow::build(int folder, int pluggin)
{
    std::string command;
    if(is_there(root_path+project_folders[folder]+SEP_PATH+project_pluggins[folder][pluggin]+SEP_PATH, project_pluggins[folder][pluggin]+".pro") )
    {
        command = "qmake " + root_path+project_folders[folder]+SEP_PATH+project_pluggins[folder][pluggin]+SEP_PATH +project_pluggins[folder][pluggin]+".pro";
        std::cout << command << std::endl;
        std::system(command.c_str());
        command = "";
    }
    else
    {
        if(!is_there(root_path+project_folders[folder]+SEP_PATH+project_pluggins[folder][pluggin]+SEP_PATH,"build"))
            command = "mkdir " +root_path+project_folders[folder]+SEP_PATH+project_pluggins[folder][pluggin]+SEP_PATH+"build && ";

        command += "cd " +root_path+project_folders[folder]+SEP_PATH+project_pluggins[folder][pluggin]+SEP_PATH+"build && cmake ..";
#ifdef WIN32
        command += "-G \"MinGW Makefiles\" ";
#endif

        std::cout << command << std::endl;
        std::system(command.c_str());
        command = "cd " +root_path+project_folders[folder]+SEP_PATH+project_pluggins[folder][pluggin]+SEP_PATH+"build && ";
    }

#ifdef WIN32
    command += "start cmd /k mingw32-make -B";
#else
    command += "make";
#endif
    std::cout << command << std::endl;
    std::system(command.c_str());
    std::vector<std::string> v;
    get_dir(root_path+project_folders[folder]+SEP_PATH+project_pluggins[folder][pluggin]+ SEP_PATH + "bin" + SEP_PATH + OS+ SEP_PATH, v);
    for(int k =0; k< v.size(); k++)
        if(v[k].compare(".")!=0 && v[k].compare("..")!=0)
        {
            project_path[folder][pluggin] = root_path+project_folders[pluggin]+SEP_PATH+project_pluggins[folder][pluggin] + SEP_PATH +"bin"+SEP_PATH+OS+SEP_PATH+ v[k] + SEP_PATH +project_pluggins[folder][pluggin] + ext_OS;
            project_line_path[folder][pluggin]->setText(QString::fromStdString(project_path[folder][pluggin]));
        }


}


