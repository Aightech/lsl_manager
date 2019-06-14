#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

#include <windows.h>
#include <fileapi.h>
#include <string>
#include <iostream>
#include <QLineEdit>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    /**
     * @brief MainWindow::get_dir get the list of the directories present at the given path.
     * @param path path of the dir to look inside
     * @param dir reference to the vector of string that will be filled with the directories that are in the path.
     */
    void get_dir(std::string path, std::vector<std::string>& dir);

    /**
     * @brief MainWindow::is_there Return true if the file give is found at the given path.
     * @param path Path to search in.
     * @param file File to find.
     * @return true if found.
     */
    bool is_there(std::string path, std::string file);

    /**
     * @brief MainWindow::launch launch the plugging link to the given coordinate (folder, pluggin).
     * @param folder Folder of the pluggin.
     * @param pluggin Pluggin to launch.
     */
    void launch(int folder, int pluggin);

    /**
     * @brief MainWindow::build build the plugging link to the given coordinate (folder, pluggin).
     * @param folder Folder of the pluggin.
     * @param pluggin Pluggin to launch.
     */
    void build(int folder, int pluggin);

private:
    Ui::MainWindow *ui;
    std::string root_path;
    std::vector<std::string> project_folders;
    std::vector<std::vector<std::string>> project_pluggins;
    std::vector<std::vector<std::string>> project_path;
    std::vector<std::vector<std::string>> project_args;

    std::vector<std::vector<QLineEdit*>> project_line_args;
    std::vector<std::vector<QLineEdit*>> project_line_path;
};

#endif // MAINWINDOW_H
