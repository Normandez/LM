#include "dialogstatistics.h"
#include "ui_dialogstatistics.h"



DialogStatistics::DialogStatistics(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogStatistics)
{
    ui->setupUi(this);
}



DialogStatistics::~DialogStatistics()
{
    delete ui;
}



//Кнопка "ОК"
void DialogStatistics::on_pushButtonOK_clicked()
{
    close();
}
//

void DialogStatistics::on_pushButton_clicked()
{
    ui->widget_2->show();
    ui->widget->hide();
    ui->widget_3->hide();
    ui->widget_4->hide();
}

void DialogStatistics::on_pushButton_2_clicked()
{
    ui->widget_2->hide();
    ui->widget->show();
    ui->widget_3->hide();
    ui->widget_4->hide();
}

void DialogStatistics::on_pushButton_3_clicked()
{
    ui->widget_2->hide();
    ui->widget->hide();
    ui->widget_3->show();
    ui->widget_4->hide();
}

void DialogStatistics::on_pushButton_4_clicked()
{
    ui->widget_2->hide();
    ui->widget->hide();
    ui->widget_3->hide();
    ui->widget_4->show();
}
