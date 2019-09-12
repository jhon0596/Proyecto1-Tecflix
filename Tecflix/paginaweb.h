#ifndef PAGINAWEB_H
#define PAGINAWEB_H

#include <QWidget>

namespace Ui {
class paginaWeb;
}

class paginaWeb : public QWidget
{
    Q_OBJECT

public:
    explicit paginaWeb(QWidget *parent = 0);
    ~paginaWeb();

private:
    Ui::paginaWeb *ui;
};

#endif // PAGINAWEB_H
