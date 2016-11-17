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
