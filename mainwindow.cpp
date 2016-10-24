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

    //Начальная конфигурация кнопок услуг
    ui->widgetMobile->setVisible(true);
    ui->widgetInternet->setVisible(false);
    ui->widgetEMoney->setVisible(false);
    ui->widgetGames->setVisible(false);
    ui->widgetGKH->setVisible(false);
    ui->widgetTaxi->setVisible(false);
    //
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
        ui->pushButtonInfo->setText ("Інформація");
        ui->pushButtonMobile->setText ("Мобільний зв'язок");
        ui->pushButtonTaxi->setText ("Таксі");
        ui->pushButtonInternet->setText("Інтернет і телефонія");
        ui->pushButtonGames->setText("Ігри");
        ui->pushButtonEMoney->setText("Електронні гроші");
        ui->pushButtonGKH->setText("ЖКГ");
    }
    //

    //RUS
    if (lang == 1){
        ui->labelFind->setText("Поиск услуги...");
        ui->pushButtonInfo->setText("Информация");
        ui->pushButtonMobile->setText("Мобильная связь");
        ui->pushButtonTaxi->setText("Такси");
        ui->pushButtonInternet->setText("Интернет и телефония");
        ui->pushButtonGames->setText("Игры");
        ui->pushButtonEMoney->setText("Электронные деньги");
        ui->pushButtonGKH->setText("ЖКХ");
    }
    //

    //ENG
    if (lang == 2){
        ui->labelFind->setText("Services search...");
        ui->pushButtonInfo->setText("Information");
        ui->pushButtonMobile->setText("Mobile connection");
        ui->pushButtonTaxi->setText("Taxi");
        ui->pushButtonInternet->setText("Internet and phone");
        ui->pushButtonGames->setText("Games");
        ui->pushButtonEMoney->setText("Electronic money");
        ui->pushButtonGKH->setText("Housing");
    }
    //
}
//Кнопка "Мобильная связь"
void MainWindow::on_pushButtonMobile_clicked()
{
    ui->widgetMobile->setVisible(true);
    ui->widgetInternet->setVisible(false);
    ui->widgetEMoney->setVisible(false);
    ui->widgetGames->setVisible(false);
    ui->widgetGKH->setVisible(false);
    ui->widgetTaxi->setVisible(false);
}
//

//Кнопка "Интернет и телефония"
void MainWindow::on_pushButtonInternet_clicked()
{
    ui->widgetMobile->setVisible(false);
    ui->widgetInternet->setVisible(true);
    ui->widgetEMoney->setVisible(false);
    ui->widgetGames->setVisible(false);
    ui->widgetGKH->setVisible(false);
    ui->widgetTaxi->setVisible(false);
}
//

//Кнопка "Электронные деньги"
void MainWindow::on_pushButtonEMoney_clicked()
{
    ui->widgetMobile->setVisible(false);
    ui->widgetInternet->setVisible(false);
    ui->widgetEMoney->setVisible(true);
    ui->widgetGames->setVisible(false);
    ui->widgetGKH->setVisible(false);
    ui->widgetTaxi->setVisible(false);
}
//

//Кнопка "Игры"
void MainWindow::on_pushButtonGames_clicked()
{
    ui->widgetMobile->setVisible(false);
    ui->widgetInternet->setVisible(false);
    ui->widgetEMoney->setVisible(false);
    ui->widgetGames->setVisible(true);
    ui->widgetGKH->setVisible(false);
    ui->widgetTaxi->setVisible(false);
}
//

//Кнопка "ЖКХ"
void MainWindow::on_pushButtonGKH_clicked()
{
    ui->widgetMobile->setVisible(false);
    ui->widgetInternet->setVisible(false);
    ui->widgetEMoney->setVisible(false);
    ui->widgetGames->setVisible(false);
    ui->widgetGKH->setVisible(true);
    ui->widgetTaxi->setVisible(false);
}
//

//Кнопка "Такси"
void MainWindow::on_pushButtonTaxi_clicked()
{
    ui->widgetMobile->setVisible(false);
    ui->widgetInternet->setVisible(false);
    ui->widgetEMoney->setVisible(false);
    ui->widgetGames->setVisible(false);
    ui->widgetGKH->setVisible(false);
    ui->widgetTaxi->setVisible(true);
}
//
