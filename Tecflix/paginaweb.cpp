#include "paginaweb.h"
#include "ui_paginaweb.h"

paginaWeb::paginaWeb(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::paginaWeb)
{
    ui->setupUi(this);
}

paginaWeb::~paginaWeb()
{
    delete ui;
}
