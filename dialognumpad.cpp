#include "dialognumpad.h"
#include "ui_dialognumpad.h"
#include <QMessageBox>
#include <payment.h>


DialogNumPad::DialogNumPad(QWidget *parent, short language, QPixmap pic) :
    QDialog(parent),
    ui(new Ui::DialogNumPad)
{
    ui->setupUi(this);

    ui->pushButtonNext->setVisible(false);

    lang = language;
    SetLanguage();

    picture = pic;
    SetPicture ();
}



DialogNumPad::~DialogNumPad()
{
    delete ui;
}



//Локализация
void DialogNumPad::SetLanguage()
{
    if (lang == 0)      //UKR
    {
        ui->labelTitle->setText("Введіть номер:");
        ui->pushButtonNext->setText("ДАЛІ  >");
        ui->pushButtonMain->setText("ГОЛОВНА");
        ui->pushButtonBack->setText("<  НАЗАД");
    }

    if (lang == 1)      //RUS
    {
        ui->labelTitle->setText("Введите номер:");
        ui->pushButtonNext->setText("ДАЛЕЕ  >");
        ui->pushButtonMain->setText("ГЛАВНАЯ");
        ui->pushButtonBack->setText("<  НАЗАД");
    }

    if (lang == 2)      //ENG
    {
        ui->labelTitle->setText("Enter the number:");
        ui->pushButtonNext->setText("NEXT  >");
        ui->pushButtonMain->setText("MAIN");
        ui->pushButtonBack->setText("<  BACK");
    }
}
//



//Установка картинки
void DialogNumPad::SetPicture ()
{
    ui->labelPicture->setPixmap(picture);
}
//



//Проверка длины строки для вставки дефисов
inline void DialogNumPad::ChkLenghChar()
{
    if (ui->lineEditNumber->text().length() == 12 || ui->lineEditNumber->text().length() == 15)
    {
        ui->lineEditNumber->setText(ui->lineEditNumber->text() + "-");
    }

    if (ui->lineEditNumber->text().length() == 19) ui->pushButtonNext->setVisible(true);
}
//



//Кнопка "1"
void DialogNumPad::on_pushButton1_clicked()
{
    if (ui->lineEditNumber->text().length() == 19)      //Ограничение ввода после макс. длины
    {
        ui->pushButtonNext->setVisible(true);
        return;
    }
        else ui->pushButtonNext->setVisible(false);

    //Для ввода цифр в скобках
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
    //

    //Обычный ввод (после скобок)
    ui->lineEditNumber->setText(ui->lineEditNumber->text() + ui->pushButton1->text());
    numOfDigets++;
    //

    ChkLenghChar();     //Для вставки дефисов
}
//
//Далее функции аналогичны, меняются только кнопки



//Кнопка "2"
void DialogNumPad::on_pushButton2_clicked()
{
    if (ui->lineEditNumber->text().length() == 19)
    {
        ui->pushButtonNext->setVisible(true);
        return;
    }
        else ui->pushButtonNext->setVisible(false);

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
//



//Кнопка "3"
void DialogNumPad::on_pushButton3_clicked()
{
    if (ui->lineEditNumber->text().length() == 19)
    {
        ui->pushButtonNext->setVisible(true);
        return;
    }
        else ui->pushButtonNext->setVisible(false);

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
//



//Кнопка "4"
void DialogNumPad::on_pushButton4_clicked()
{
    if (ui->lineEditNumber->text().length() == 19)
    {
        ui->pushButtonNext->setVisible(true);
        return;
    }
        else ui->pushButtonNext->setVisible(false);

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
//



//Кнопка "5"
void DialogNumPad::on_pushButton5_clicked()
{
    if (ui->lineEditNumber->text().length() == 19)
    {
        ui->pushButtonNext->setVisible(true);
        return;
    }
        else ui->pushButtonNext->setVisible(false);

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
//



//Кнопка "6"
void DialogNumPad::on_pushButton6_clicked()
{
    if (ui->lineEditNumber->text().length() == 19)
    {
        ui->pushButtonNext->setVisible(true);
        return;
    }
        else ui->pushButtonNext->setVisible(false);

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
//



//Кнопка "7"
void DialogNumPad::on_pushButton7_clicked()
{
    if (ui->lineEditNumber->text().length() == 19)
    {
        ui->pushButtonNext->setVisible(true);
        return;
    }
        else ui->pushButtonNext->setVisible(false);

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
//



//Кнопка "8"
void DialogNumPad::on_pushButton8_clicked()
{
    if (ui->lineEditNumber->text().length() == 19)
    {
        ui->pushButtonNext->setVisible(true);
        return;
    }
        else ui->pushButtonNext->setVisible(false);

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
//



//Кнопка "9"
void DialogNumPad::on_pushButton9_clicked()
{
    if (ui->lineEditNumber->text().length() == 19)
    {
        ui->pushButtonNext->setVisible(true);
        return;
    }
        else ui->pushButtonNext->setVisible(false);

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
//



//Кнопка "0"
void DialogNumPad::on_pushButton0_clicked()
{
    if (ui->lineEditNumber->text().length() == 19)
    {
        ui->pushButtonNext->setVisible(true);
        return;
    }
        else ui->pushButtonNext->setVisible(false);

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
//



//Кнопка "Стереть символ"
void DialogNumPad::on_pushButtonDelete_clicked()
{
    if (numOfDigets == 0) return;       //Ограничение затирания стандартных символов в начале

    ui->pushButtonNext->setVisible(false);

    QString str, buf = " ";
    str = ui->lineEditNumber->text();

    //Затирание дефисов
    if (numOfDigets == 8 || numOfDigets == 6)
    {
        str.remove(str.length()-2, 2);
        ui->lineEditNumber->setText(str);
        numOfDigets--;
        return;
    }
    //

    //Затирание цифр в скобках
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
    //

    //Обычное затирание
    str.remove(str.length()-1, 1);
    ui->lineEditNumber->setText(str);
    numOfDigets--;
    //
}
//



//Кнопка "Назад"
void DialogNumPad::on_pushButtonBack_clicked()
{
    close();
}
//



//Кнопка "Главная"
void DialogNumPad::on_pushButtonMain_clicked()
{
    close();
}
//


void DialogNumPad::on_pushButtonNext_clicked()
{
    Payment *wnd = new Payment (this, lang, picture, ui->lineEditNumber->text());
    wnd->exec();
}
