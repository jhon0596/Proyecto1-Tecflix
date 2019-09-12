#ifndef MOVIEMETADATA_H
#define MOVIEMETADATA_H

#include <QDialog>

namespace Ui {
class movieMetaData;
}

class movieMetaData : public QDialog
{
    Q_OBJECT

public:
    explicit movieMetaData(QWidget *parent = 0);
    ~movieMetaData();

private:
    Ui::movieMetaData *ui;
};

#endif // MOVIEMETADATA_H
