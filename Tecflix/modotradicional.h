#ifndef MODOTRADICIONAL_H
#define MODOTRADICIONAL_H

#include <QMainWindow>

namespace Ui {
class modoTradicional;
}
class QStandardItemModel;
class modoTradicional : public QMainWindow
{
    Q_OBJECT

public:
    explicit modoTradicional(QWidget *parent = 0);
    void abrirArchivo();
    ~modoTradicional();

private:
    int bd = 0;

    void setValueAt(int ix, int jx, const QString &value);
    Ui::modoTradicional *ui;
    QStandardItemModel *mModel;
};

#endif // MODOTRADICIONAL_H
