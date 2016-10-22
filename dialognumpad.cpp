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
