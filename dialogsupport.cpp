#include "dialogsupport.h"
#include "ui_dialogsupport.h"
#include "addpaper.h"
#include "dialogstatistics.h"
#include "dialoggetmoney.h"



DialogSupport::DialogSupport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSupport)
{
    ui->setupUi(this);
    //par = parent;
}



DialogSupport::~DialogSupport()
{
    delete ui;
}



//Кнопка "Поповнити папір"
void DialogSupport::on_pushButtonAddPaper_clicked()
{
    AddPaper *wnd = new AddPaper (this);
    wnd->exec();
}
//



//Кнопка "Вихід"
void DialogSupport::on_pushButtonExit_clicked()
{
    close();
}
//



//Кнопка "Статистика"
void DialogSupport::on_pushButton_4_clicked()
{
    DialogStatistics *wndStatistics = new DialogStatistics(this);
    wndStatistics->exec();
}
//



//Кнопка "Снятие баланса"
void DialogSupport::on_pushButton_2_clicked()
{
    DialogGetMoney *wndGetMoney = new DialogGetMoney (this);
    wndGetMoney->exec();
}
//

void DialogSupport::on_pushButton_3_clicked()
{
    this->parentWidget()->close();
}
