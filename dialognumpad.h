#ifndef DIALOGNUMPAD_H
#define DIALOGNUMPAD_H

#include <QDialog>

namespace Ui {
class DialogNumPad;
}

class DialogNumPad : public QDialog
{
    Q_OBJECT

public:
    explicit DialogNumPad(QWidget *parent = 0);
    ~DialogNumPad();

private:
    Ui::DialogNumPad *ui;
};

#endif // DIALOGNUMPAD_H
