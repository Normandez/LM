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
    QWidget par;

private slots:
    void on_pushButtonAddPaper_clicked();

    void on_pushButtonExit_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::DialogSupport *ui;
};

#endif // DIALOGSUPPORT_H
