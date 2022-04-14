#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "Person.h"
#include <vector>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QString PrintPerson(Person obj1);
    void PrintPersonall(std::vector<Person> book);
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    std::vector <Person> Notebook;
private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
