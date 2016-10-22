#ifndef DIALOGSUPPORT_H
#define DIALOGSUPPORT_H

#include <QDialog>

namespace Ui {
class DialogSupport;
}

class DialogSupport : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSupport(QWidget *parent = 0);
    ~DialogSupport();

private:
    Ui::DialogSupport *ui;
};

#endif // DIALOGSUPPORT_H
