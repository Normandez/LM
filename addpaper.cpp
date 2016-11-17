#include "addpaper.h"
#include "ui_addpaper.h"



AddPaper::AddPaper(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPaper)
{
    ui->setupUi(this);

    ui->widgetProcessing->setVisible(false);
    ui->widgetSuccess->setVisible(false);
}



AddPaper::~AddPaper()
{
    delete ui;
}



//Кнопка "Назад"
void AddPaper::on_pushButtonCancel_clicked()
{
    close();
}
//



//Кнопка "ОК"
void AddPaper::on_pushButtonOK_clicked()
{
    ui->widget->setVisible(false);
    ui->widgetProcessing->setVisible(true);
    QTimer::singleShot(3000, this, SLOT(TimerProcessingTimeOut()));
}
//



//Таймер обработки
void AddPaper::TimerProcessingTimeOut()
{
    ui->widgetProcessing->setVisible(false);
    ui->widgetSuccess->setVisible(true);
    QTimer::singleShot(1500, this, SLOT(TimerSuccessTimeOut()));
}
//



//Таймер успеха
void AddPaper::TimerSuccessTimeOut()
{
    close();
}
//
