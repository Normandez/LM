#include "mainwindow.h"
#include "dialognumpad.h"
#include "dialogsupport.h"
#include "keyboard.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Кнопка "Поиск"
void MainWindow::on_pushButtonFind_clicked()
{
    QString buf = ui->lineEditFind->text();
    if (buf == "@@@Support@@@"){
        DialogSupport *wndSup = new DialogSupport (this);
        wndSup->exec();
    }
}
//

//Кнопка "Киевстар Моб."
void MainWindow::on_pushButtonKyivstarMob_clicked()
{
    DialogNumPad *wndNumPad = new DialogNumPad (this);
    wndNumPad->exec();
}
//

//Кнопка "Домашний интернет Киевстар"
void MainWindow::on_pushButtonKievstarInet_clicked()
{
    Keyboard *wnd = new Keyboard (this);
    wnd->exec();
}
//

void MainWindow::on_pushButtonUKR_clicked()
{
    lang = 0;
    ui->widgetLocaleSelectUKR->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(194, 0, 0);");
    ui->widgetLocaleSelectRUS->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(255, 255, 255);");
    ui->widgetLocaleSelectENG->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(255, 255, 255);");
    changeKeyLang();
}

void MainWindow::on_pushButtonRUS_clicked()
{
    lang = 1;
    ui->widgetLocaleSelectUKR->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(255, 255, 255);");
    ui->widgetLocaleSelectRUS->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(194, 0, 0);");
    ui->widgetLocaleSelectENG->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(255, 255, 255);");
    changeKeyLang();
}

void MainWindow::on_pushButtonENG_clicked()
{
    lang = 2;
    ui->widgetLocaleSelectUKR->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(255, 255, 255);");
    ui->widgetLocaleSelectRUS->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(255, 255, 255);");
    ui->widgetLocaleSelectENG->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(194, 0, 0);");
    changeKeyLang();
}

void MainWindow::changeKeyLang (){
    //UKR
    if (lang == 0){
        ui->labelFind->setText("Пошук послуги...");
        ui->pushButtonInfo->setText("Інформація");
        ui->tabWidgetMain->setTabText(0, "Мобільний зв'язок");
        ui->tabWidgetMain->setTabText(1, "Таксі");
        ui->tabWidgetMain->setTabText(2, "Інтернет і телефонія");
        ui->tabWidgetMain->setTabText(3, "Ігри");
        ui->tabWidgetMain->setTabText(4, "Електронні гроші");
        ui->tabWidgetMain->setTabText(5, "ЖКГ");
    }
    //

    //RUS
    if (lang == 1){
        ui->labelFind->setText("Поиск услуги...");
        ui->pushButtonInfo->setText("Информация");
        ui->tabWidgetMain->setTabText(0, "Мобильная связь");
        ui->tabWidgetMain->setTabText(1, "Такси");
        ui->tabWidgetMain->setTabText(2, "Интернет и телефония");
        ui->tabWidgetMain->setTabText(3, "Игры");
        ui->tabWidgetMain->setTabText(4, "Электронные деньги");
        ui->tabWidgetMain->setTabText(5, "ЖКХ");
    }
    //

    //ENG
    if (lang == 2){
        ui->labelFind->setText("Services search...");
        ui->pushButtonInfo->setText("Information");
        ui->tabWidgetMain->setTabText(0, "Mobile connection");
        ui->tabWidgetMain->setTabText(1, "Taxi");
        ui->tabWidgetMain->setTabText(2, "Internet and phone");
        ui->tabWidgetMain->setTabText(3, "Games");
        ui->tabWidgetMain->setTabText(4, "Electronic money");
        ui->tabWidgetMain->setTabText(5, "Housing");
    }
    //
}
