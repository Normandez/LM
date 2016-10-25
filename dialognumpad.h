#ifndef DIALOGNUMPAD_H
#define DIALOGNUMPAD_H

#include <QDialog>

namespace Ui {
class DialogNumPad;
}

class DialogNumPad : public QDialog
{
    Q_OBJECT
private:
    short numOfDigets = 0;      //Учет количества цифр номера (без +38)

public:
    explicit DialogNumPad(QWidget *parent = 0);
    void ChkLenghChar ();
    ~DialogNumPad();

private slots:
    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

    void on_pushButton3_clicked();

    void on_pushButton4_clicked();

    void on_pushButton5_clicked();

    void on_pushButton6_clicked();

    void on_pushButton7_clicked();

    void on_pushButton8_clicked();

    void on_pushButton9_clicked();

    void on_pushButton0_clicked();

    void on_pushButton_clicked();

    void on_pushButtonDelete_clicked();

private:
    Ui::DialogNumPad *ui;
};

#endif // DIALOGNUMPAD_H
