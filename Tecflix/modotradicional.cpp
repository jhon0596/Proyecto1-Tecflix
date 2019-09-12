#include "modotradicional.h"
#include "ui_modotradicional.h"
#include<QFile>
#include<QStandardItemModel>
#include<QTextStream>
#include<QDebug>
modoTradicional::modoTradicional(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::modoTradicional)
{
    ui->setupUi(this);
    mModel = new QStandardItemModel(this);
    ui->tableView->setModel(mModel);


}

modoTradicional::~modoTradicional()
{
    delete ui;
}


void modoTradicional::abrirArchivo(){
    QFile movieData("/home/jonathan/Escritorio/movie_metadata.csv");
    if(!movieData.open(QIODevice::ReadOnly | QIODevice::Text)){
        return;
    }
    QTextStream xin(&movieData);
    int bd2= bd+9;
    int bd3 = bd;


    while(bd3!=bd2){
        mModel->setRowCount(bd3);
        //qDebug() << bd3 << 777;
        auto line = xin.readLine();
        auto values = line.split(",");
        const int colCount = values.size();
        mModel->setColumnCount(colCount);
        for(int jx = 0; jx<colCount;jx++){
            setValueAt(bd3,jx,values.at(jx));
        }
        bd3++;
    }
    bd = bd3;
    movieData.close();
}
void modoTradicional::setValueAt(int ix, int jx, const QString &value){
    if(!mModel->item(ix,jx)){
        mModel->setItem(ix,jx, new QStandardItem(value));
    }else{
        mModel->item(ix,jx)->setText(value);

    }
}
