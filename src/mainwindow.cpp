#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QFont f1 = QFont("MS Shell Dlg 2", 10);
    f1.setUnderline(true);

    QFont f2 = QFont("MS Shell Dlg 2", 8);
    f2.setBold(true);

    char buffer[MAX_PATH];
    GetModuleFileNameA( NULL, buffer, MAX_PATH );
    char * c = strstr(buffer, "tne_project")+12;
    *c = '\0';
    std::string root_path(buffer);
    ui->lineEdit_rootPath->setText(QString::fromStdString(root_path));
    ui->lineEdit_rootPath->setMinimumWidth(500);


    std::vector<std::string> v;
    get_dir(root_path,project_folders);
    for (std::vector<std::string>::iterator it = project_folders.begin() ; it != project_folders.end(); ++it)
    {
        if(it->c_str()[0] == '.' || it->compare("docs")==0)
            project_folders.erase (it--);
        else
        {
            get_dir(root_path+(*it)+"\\",v);
            for (std::vector<std::string>::iterator it2 = v.begin() ; it2 != v.end(); ++it2)
                if(it2->c_str()[0] == '.' || it2->compare("docs")==0 || it2->compare("lsl_manager")==0 || it2->compare("lsl_managerWeb")==0)
                    v.erase (it2--);
            project_pluggins.push_back(v);
        }
    }

    for (int i = 0; i< project_folders.size(); i++)
    {
        std::vector<std::string> w;
        project_path.push_back(w);
        project_args.push_back(w);
        for (int j = 0; j< project_pluggins[i].size(); j++)
        {
            project_path[i].push_back("none");
            project_args[i].push_back("");
            get_dir(root_path+project_folders[i]+"\\"+project_pluggins[i][j]+"\\bin",v);
            if(v.size()>0)
            {
                get_dir(root_path+project_folders[i]+"\\"+project_pluggins[i][j]+"\\bin\\WIN32\\Win",v);
                if(v.size()>0)
                {
                    project_path[i][j] = root_path+project_folders[i]+"\\"+project_pluggins[i][j]+"\\bin\\WIN32\\"+ v[0] + "\\" +project_pluggins[i][j] + ".exe";
                }
            }

        }
    }


    QFrame* line = new QFrame();
    line->setGeometry(QRect(/* ... */));
    line->setFrameShape(QFrame::HLine); // Replace by VLine for vertical line
    line->setFrameShadow(QFrame::Sunken);

    for(int i =0; i<project_folders.size(); i++)
    {
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
            QLineEdit *arg_edit = new QLineEdit(QString::fromStdString(project_args[i][j]));
            project_line_path[i].push_back(path);
            project_line_args[i].push_back(arg_edit);
            arg_edit->setMaximumWidth(200);
            QLabel *lab = new QLabel(QString::fromStdString("  " +project_pluggins[i][j]));
            lab->setFont(f2);
            lab->setMinimumWidth(200);
            QLabel *arg = new QLabel("  arg.:");
            arg->setAlignment(Qt::AlignLeft);
            a->addWidget(lab);
            a->addWidget(path);
            a->addWidget(arg);
            a->addWidget(arg_edit);

            QPushButton *p = new QPushButton("run");
            connect(
                p, &QPushButton::clicked,
                [this, i, j]() {this->launch(i, j); }
            );

            a->addWidget(p);
            ui->layout_project->addLayout(a);
        }
    }






}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::get_dir(std::string path, std::vector<std::string>& dir)
{
    dir.clear();
    HANDLE hFind;
    WIN32_FIND_DATAA data;
    std::string path_(path);
    path_+="*";
    std::cout << path_ << std::endl;
    hFind = FindFirstFileA(path_.c_str(), &data);
    if (hFind != INVALID_HANDLE_VALUE)
    {
        do {
            if( data.dwFileAttributes == FILE_ATTRIBUTE_DIRECTORY)
            {
                dir.push_back(data.cFileName);
                std::cout << data.cFileName << std::endl;
            }
        } while( FindNextFileA( hFind, &data) );  // FindNextFileA if using char strings (instead of TCHAR strings)
        FindClose( hFind );
    }
}

void MainWindow::launch(int folder, int pluggin)
{
#ifdef WIN32
        std::string command = project_line_path[folder][pluggin]->text().toStdString() + " " + project_line_args[folder][pluggin]->text().toStdString();
#else
        std::string command = "python3 script/plot_line.py";
#endif


        std::cout << command << std::endl;
        char cmd[command.size()+1];
        command.copy(cmd,command.size()+1);
        cmd[command.size()]='\0';
        std::system(cmd);
}
