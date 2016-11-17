#ifndef DIALOGGETMONEY_H
#define DIALOGGETMONEY_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class DialogGetMoney;
}

class DialogGetMoney : public QDialog
{
    Q_OBJECT

public:
    explicit DialogGetMoney(QWidget *parent = 0);
    ~DialogGetMoney();

public slots:
    void TimerProcessingTimeOut();

    void TimerSuccessTimeOut();

private slots:
    void on_pushButtonCancel_clicked();

    void on_pushButtonOK_clicked();

private:
    Ui::DialogGetMoney *ui;
};

#endif // DIALOGGETMONEY_H
