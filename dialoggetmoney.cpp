#include "dialoggetmoney.h"
#include "ui_dialoggetmoney.h"



DialogGetMoney::DialogGetMoney(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGetMoney)
{
    ui->setupUi(this);

    ui->widgetProcessing->setVisible(false);
    ui->widgetSuccess->setVisible(false);
}



DialogGetMoney::~DialogGetMoney()
{
    delete ui;
}



//Кнопка "Назад"
void DialogGetMoney::on_pushButtonCancel_clicked()
{
  close();
}
//



//Кнопка "Подтвердить"
void DialogGetMoney::on_pushButtonOK_clicked()
{
    ui->widget->setVisible(false);
    ui->widgetProcessing->setVisible(true);
    QTimer::singleShot(5000, this, SLOT(TimerProcessingTimeOut()));
}
//



//Таймер обработки
void DialogGetMoney::TimerProcessingTimeOut()
{
    ui->widgetProcessing->setVisible(false);
    ui->widgetSuccess->setVisible(true);
    QTimer::singleShot(3000, this, SLOT(TimerSuccessTimeOut()));
}
//



//Таймер успеха
void DialogGetMoney::TimerSuccessTimeOut()
{
    close();
}
//
