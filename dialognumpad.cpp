#include "dialognumpad.h"
#include "ui_dialognumpad.h"

DialogNumPad::DialogNumPad(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogNumPad)
{
    ui->setupUi(this);
}

DialogNumPad::~DialogNumPad()
{
    delete ui;
}

void DialogNumPad::ChkLenghChar()
{
    if (ui->lineEditNumber->text().length() == 7)
    {
        ui->lineEditNumber->setText(ui->lineEditNumber->text() + ")");
    }
}

void DialogNumPad::on_pushButton1_clicked()
{
    ui->lineEditNumber->setText(ui->lineEditNumber->text() + ui->pushButton1->text());
    ChkLenghChar();
}
