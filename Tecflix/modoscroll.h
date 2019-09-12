#ifndef MODOSCROLL_H
#define MODOSCROLL_H

#include <QMainWindow>

namespace Ui {
class modoScroll;

}

class QStandardItemModel;
class modoScroll : public QMainWindow
{
    Q_OBJECT

public:
    explicit modoScroll(QWidget *parent = 0);
    void abrirArchivo();
    ~modoScroll();

private:
    Ui::modoScroll *ui;
    void setValueAt(int ix, int jx, const QString &value);
    QStandardItemModel *mModel;
};

#endif // MODOSCROLL_H
