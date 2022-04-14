#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::PrintPerson(Person obj1)
{
    return obj1.Fio+" : "+obj1.Telephone+"\n";

}

void MainWindow::PrintPersonall(std::vector<Person> book)
{
    ui->textEdit->setPlainText("");
    QString buff;
    for(int i=0;i<book.size();i++)
    {
        buff+=PrintPerson(book[i])+"\n";
    }
   ui->textEdit->setPlainText(buff);
}

void MainWindow::on_pushButton_clicked()
{
  Person obj1;
  obj1.Fio=ui->lineEdit->text();
  obj1.Telephone=ui->lineEdit_2->text();
  MainWindow::Notebook.push_back(obj1);
  PrintPersonall(MainWindow::Notebook);
  ui->lineEdit->clear();
  ui->lineEdit_2->clear();
}
