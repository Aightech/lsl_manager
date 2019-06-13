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

    void get_dir(std::string path, std::vector<std::string>& dir);
    bool is_there(std::string path, std::string file);
    void launch(int folder, int pluggin);
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
