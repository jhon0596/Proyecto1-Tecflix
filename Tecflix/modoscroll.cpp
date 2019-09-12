#include "modoscroll.h"
#include "ui_modoscroll.h"
#include<QFile>
#include<QStandardItemModel>
#include<QTextStream>
modoScroll::modoScroll(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::modoScroll)
{
    ui->setupUi(this);
    mModel = new QStandardItemModel(this);
    ui->tableView->setModel(mModel);
}

modoScroll::~modoScroll()
{
    delete ui;
}

void modoScroll::abrirArchivo(){
    QFile movieData("/home/jonathan/Escritorio/movie_metadata.csv");
    if(!movieData.open(QIODevice::ReadOnly | QIODevice::Text)){
        return;
    }
    QTextStream xin(&movieData);
    int ix=0;
    while(!xin.atEnd()){
        mModel->setRowCount(ix);
        auto line = xin.readLine();
        auto values = line.split(",");
        const int colCount = values.size();
        mModel->setColumnCount(colCount);
        for(int jx = 0; jx<colCount;jx++){
            setValueAt(ix,jx,values.at(jx));
        }
        ix++;
    }
    movieData.close();
}
void modoScroll::setValueAt(int ix, int jx, const QString &value){
    if(!mModel->item(ix,jx)){
        mModel->setItem(ix,jx, new QStandardItem(value));
    }else{
        mModel->item(ix,jx)->setText(value);
    }
}
