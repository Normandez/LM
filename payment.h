#ifndef PAYMENT_H
#define PAYMENT_H

#include <QDialog>

namespace Ui {
class Payment;
}

class Payment : public QDialog
{
    Q_OBJECT

public:
    explicit Payment(QWidget *parent, short language, QPixmap pic, QString UserData);
    ~Payment();

private slots:
    void on_pushButtonBack_clicked();

    void on_pushButtonMain_clicked();

    void on_pushButtonNext_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Payment *ui;
    QString UserDataPrinyatye;
    short lang = 0;     //0 -- UKR, 1 -- RUS, 2 -- ENG
    QPixmap picture;        //Картинка услуги
    void SetLanguage();
    void SetPicture();
    QWidget *par;
};

#endif // PAYMENT_H
