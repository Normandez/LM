#include "dialognumpad.h"
#include "ui_dialognumpad.h"
#include <QMessageBox>

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

inline void DialogNumPad::ChkLenghChar()
{
    if (ui->lineEditNumber->text().length() == 12 || ui->lineEditNumber->text().length() == 15)
    {
        ui->lineEditNumber->setText(ui->lineEditNumber->text() + "-");
    }
}

void DialogNumPad::on_pushButton1_clicked()
{
    if (ui->lineEditNumber->text().length() == 19) return;

    if (numOfDigets < 3)
    {
        QString str = ui->lineEditNumber->text(), bufStr;
        if (numOfDigets == 0)
        {
            bufStr = ui->pushButton1->text();
            str[5] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
        if (numOfDigets == 1)
        {
            bufStr = ui->pushButton1->text();
            str[6] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
        if (numOfDigets == 2)
        {
            bufStr = ui->pushButton1->text();
            str[7] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
    }

    ui->lineEditNumber->setText(ui->lineEditNumber->text() + ui->pushButton1->text());
    numOfDigets++;

    if (ui->lineEditNumber->text().length() == 12 || ui->lineEditNumber->text().length() == 15)
    {
        ui->lineEditNumber->setText(ui->lineEditNumber->text() + "-");
    }
}

void DialogNumPad::on_pushButton2_clicked()
{
    if (ui->lineEditNumber->text().length() == 19) return;

    if (numOfDigets < 3)
    {
        QString str = ui->lineEditNumber->text(), bufStr;
        if (numOfDigets == 0)
        {
            bufStr = ui->pushButton2->text();
            str[5] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
        if (numOfDigets == 1)
        {
            bufStr = ui->pushButton2->text();
            str[6] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
        if (numOfDigets == 2)
        {
            bufStr = ui->pushButton2->text();
            str[7] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
    }

    ui->lineEditNumber->setText(ui->lineEditNumber->text() + ui->pushButton2->text());
    numOfDigets++;
    ChkLenghChar();
}

void DialogNumPad::on_pushButton3_clicked()
{
    if (ui->lineEditNumber->text().length() == 19) return;

    if (numOfDigets < 3)
    {
        QString str = ui->lineEditNumber->text(), bufStr;
        if (numOfDigets == 0)
        {
            bufStr = ui->pushButton3->text();
            str[5] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
        if (numOfDigets == 1)
        {
            bufStr = ui->pushButton3->text();
            str[6] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
        if (numOfDigets == 2)
        {
            bufStr = ui->pushButton3->text();
            str[7] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
    }

    ui->lineEditNumber->setText(ui->lineEditNumber->text() + ui->pushButton3->text());
    numOfDigets++;
    ChkLenghChar();
}

void DialogNumPad::on_pushButton4_clicked()
{
    if (ui->lineEditNumber->text().length() == 19) return;

    if (numOfDigets < 3)
    {
        QString str = ui->lineEditNumber->text(), bufStr;
        if (numOfDigets == 0)
        {
            bufStr = ui->pushButton4->text();
            str[5] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
        if (numOfDigets == 1)
        {
            bufStr = ui->pushButton4->text();
            str[6] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
        if (numOfDigets == 2)
        {
            bufStr = ui->pushButton4->text();
            str[7] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
    }

    ui->lineEditNumber->setText(ui->lineEditNumber->text() + ui->pushButton4->text());
    numOfDigets++;
    ChkLenghChar();
}

void DialogNumPad::on_pushButton5_clicked()
{
    if (ui->lineEditNumber->text().length() == 19) return;

    if (numOfDigets < 3)
    {
        QString str = ui->lineEditNumber->text(), bufStr;
        if (numOfDigets == 0)
        {
            bufStr = ui->pushButton5->text();
            str[5] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
        if (numOfDigets == 1)
        {
            bufStr = ui->pushButton5->text();
            str[6] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
        if (numOfDigets == 2)
        {
            bufStr = ui->pushButton5->text();
            str[7] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
    }

    ui->lineEditNumber->setText(ui->lineEditNumber->text() + ui->pushButton5->text());
    numOfDigets++;
    ChkLenghChar();
}

void DialogNumPad::on_pushButton6_clicked()
{
    if (ui->lineEditNumber->text().length() == 19) return;

    if (numOfDigets < 3)
    {
        QString str = ui->lineEditNumber->text(), bufStr;
        if (numOfDigets == 0)
        {
            bufStr = ui->pushButton6->text();
            str[5] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
        if (numOfDigets == 1)
        {
            bufStr = ui->pushButton6->text();
            str[6] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
        if (numOfDigets == 2)
        {
            bufStr = ui->pushButton6->text();
            str[7] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
    }

    ui->lineEditNumber->setText(ui->lineEditNumber->text() + ui->pushButton6->text());
    numOfDigets++;
    ChkLenghChar();
}

void DialogNumPad::on_pushButton7_clicked()
{
    if (ui->lineEditNumber->text().length() == 19) return;

    if (numOfDigets < 3)
    {
        QString str = ui->lineEditNumber->text(), bufStr;
        if (numOfDigets == 0)
        {
            bufStr = ui->pushButton7->text();
            str[5] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
        if (numOfDigets == 1)
        {
            bufStr = ui->pushButton7->text();
            str[6] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
        if (numOfDigets == 2)
        {
            bufStr = ui->pushButton7->text();
            str[7] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
    }

    ui->lineEditNumber->setText(ui->lineEditNumber->text() + ui->pushButton7->text());
    numOfDigets++;
    ChkLenghChar();
}

void DialogNumPad::on_pushButton8_clicked()
{
    if (ui->lineEditNumber->text().length() == 19) return;

    if (numOfDigets < 3)
    {
        QString str = ui->lineEditNumber->text(), bufStr;
        if (numOfDigets == 0)
        {
            bufStr = ui->pushButton8->text();
            str[5] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
        if (numOfDigets == 1)
        {
            bufStr = ui->pushButton8->text();
            str[6] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
        if (numOfDigets == 2)
        {
            bufStr = ui->pushButton8->text();
            str[7] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
    }

    ui->lineEditNumber->setText(ui->lineEditNumber->text() + ui->pushButton8->text());
    numOfDigets++;
    ChkLenghChar();
}

void DialogNumPad::on_pushButton9_clicked()
{
    if (ui->lineEditNumber->text().length() == 19) return;

    if (numOfDigets < 3)
    {
        QString str = ui->lineEditNumber->text(), bufStr;
        if (numOfDigets == 0)
        {
            bufStr = ui->pushButton9->text();
            str[5] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
        if (numOfDigets == 1)
        {
            bufStr = ui->pushButton9->text();
            str[6] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
        if (numOfDigets == 2)
        {
            bufStr = ui->pushButton9->text();
            str[7] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
    }

    ui->lineEditNumber->setText(ui->lineEditNumber->text() + ui->pushButton9->text());
    numOfDigets++;
    ChkLenghChar();
}

void DialogNumPad::on_pushButton0_clicked()
{
    if (ui->lineEditNumber->text().length() == 19) return;

    if (numOfDigets < 3)
    {
        QString str = ui->lineEditNumber->text(), bufStr;
        if (numOfDigets == 0)
        {
            bufStr = ui->pushButton0->text();
            str[5] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
        if (numOfDigets == 1)
        {
            bufStr = ui->pushButton0->text();
            str[6] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
        if (numOfDigets == 2)
        {
            bufStr = ui->pushButton0->text();
            str[7] = bufStr[0];
            ui->lineEditNumber->setText(str);
            numOfDigets++;
            return;
        }
    }

    ui->lineEditNumber->setText(ui->lineEditNumber->text() + ui->pushButton0->text());
    numOfDigets++;
    ChkLenghChar();
}

void DialogNumPad::on_pushButtonDelete_clicked()
{
    if (numOfDigets == 0) return;

    QString str, buf = " ";
    str = ui->lineEditNumber->text();

    if (numOfDigets == 8 || numOfDigets == 6)
    {
        str.remove(str.length()-2, 2);
        ui->lineEditNumber->setText(str);
        numOfDigets--;
        return;
    }

    if (numOfDigets == 3)
    {
        str[7] = buf[0];
        numOfDigets--;
        ui->lineEditNumber->setText(str);
        return;
    }
    if (numOfDigets == 2)
    {
        str[6] = buf[0];
        numOfDigets--;
        ui->lineEditNumber->setText(str);
        return;
    }
    if (numOfDigets == 1)
    {
        str[5] = buf[0];
        numOfDigets--;
        ui->lineEditNumber->setText(str);
        return;
    }

    str.remove(str.length()-1, 1);
    ui->lineEditNumber->setText(str);
    numOfDigets--;
}
