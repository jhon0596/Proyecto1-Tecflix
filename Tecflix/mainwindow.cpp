#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::setValueAt(int ix, int jx, const QString &value){
    if(!mModel->item(ix,jx)){
        mModel->setItem(ix,jx, new QStandardItem(value));
    }else{
        mModel->item(ix,jx)->setText(value);

    }
}
