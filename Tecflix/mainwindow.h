#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();




private:

    Ui::MainWindow *ui;
    void setValueAt(int ix, int jx, const QString &value);
    QStandardItemModel *mModel;

};

#endif // MAINWINDOW_H
