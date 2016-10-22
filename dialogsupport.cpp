#include "dialogsupport.h"
#include "ui_dialogsupport.h"

DialogSupport::DialogSupport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSupport)
{
    ui->setupUi(this);
}

DialogSupport::~DialogSupport()
{
    delete ui;
}
