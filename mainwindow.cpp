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

    //Начальное значение переменных для работы с языками,
    //капс локом и специальными символами
    langForKeyBoard = 1;
    capslock = 0;
    specSymbol = 0;
    shiftKey = 0;
    //
    //нажатие на поиск
    ui->lineEditFind->installEventFilter(this);
    //изначально клавиатура скрыта
    ui->widget->hide();
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
    //Меняю цвет вкладки
    ui->pushButtonMobile->setStyleSheet("border-radius: 1px;background-color: rgb(7, 116, 187);color: #ffffff");
    ui->pushButtonInternet->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonEMoney->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonGames->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonGKH->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonTaxi->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    //

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
    //Меняю цвет вкладки
    ui->pushButtonMobile->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonInternet->setStyleSheet("border-radius: 1px;background-color: rgb(7, 116, 187);color: #ffffff");
    ui->pushButtonEMoney->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonGames->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonGKH->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonTaxi->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    //

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
    //Меняю цвет вкладки
    ui->pushButtonMobile->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonInternet->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonEMoney->setStyleSheet("border-radius: 1px;background-color: rgb(7, 116, 187);color: #ffffff");
    ui->pushButtonGames->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonGKH->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonTaxi->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    //

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
    //Меняю цвет вкладки
    ui->pushButtonMobile->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonInternet->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonEMoney->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonGames->setStyleSheet("border-radius: 1px;background-color: rgb(7, 116, 187);color: #ffffff");
    ui->pushButtonGKH->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonTaxi->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    //

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
    //Меняю цвет вкладки
    ui->pushButtonMobile->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonInternet->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonEMoney->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonGames->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonGKH->setStyleSheet("border-radius: 1px;background-color: rgb(7, 116, 187);color: #ffffff");
    ui->pushButtonTaxi->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    //

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
    //Меняю цвет вкладки
    ui->pushButtonMobile->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonInternet->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonEMoney->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonGames->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonGKH->setStyleSheet("border-radius: 1px;background-color: #eb510f;color: #ffffff");
    ui->pushButtonTaxi->setStyleSheet("border-radius: 1px;background-color: rgb(7, 116, 187);color: #ffffff");
    //

    ui->widgetMobile->setVisible(false);
    ui->widgetInternet->setVisible(false);
    ui->widgetEMoney->setVisible(false);
    ui->widgetGames->setVisible(false);
    ui->widgetGKH->setVisible(false);
    ui->widgetTaxi->setVisible(true);
}
//

//CapsLock
void MainWindow::on_KeyBoardBut_40_clicked()
{
    if(capslock == 1){
        ui->widgetPic_1->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(255, 255, 255);");
        capslock = 0;
    }
    else{
        ui->widgetPic_1->setStyleSheet("border: 2px solid #d6d6d6;\n background-color:rgb(194, 0, 0);");
        capslock = 1;
    }
    Caps();
}

//SpecSymbols
void MainWindow::on_KeyBoardBut_50_clicked()
{
    if(specSymbol == 0){//показать спец символы и скрыть остальные
        ui->KeyBoardBut_1->setText("-");
        ui->KeyBoardBut_2->setText("+");
        ui->KeyBoardBut_3->setText(":");
        ui->KeyBoardBut_4->setText(",");
        ui->KeyBoardBut_5->setText(".");
        ui->KeyBoardBut_6->setText("_");
        ui->KeyBoardBut_7->setText("/");
        ui->KeyBoardBut_8->setText("|");
        ui->KeyBoardBut_9->setText("?");
        ui->KeyBoardBut_10->setText("@");
        ui->KeyBoardBut_11->setText("{");
        ui->KeyBoardBut_12->setText("}");
        ui->KeyBoardBut_14->setText("[");
        ui->KeyBoardBut_15->setText("]");
        ui->KeyBoardBut_16->setText("<");
        ui->KeyBoardBut_17->setText(">");

        ui->KeyBoardBut_18->setText("");   //убираю текст
        ui->KeyBoardBut_19->setText("");
        ui->KeyBoardBut_20->setText("");
        ui->KeyBoardBut_21->setText("");
        ui->KeyBoardBut_22->setText("");
        ui->KeyBoardBut_23->setText("");
        ui->KeyBoardBut_24->setText("");
        ui->KeyBoardBut_25->setText("");
        ui->KeyBoardBut_26->setText("");
        ui->KeyBoardBut_27->setText("");
        ui->KeyBoardBut_28->setText("");
        ui->KeyBoardBut_29->setText("");
        ui->KeyBoardBut_30->setText("");
        ui->KeyBoardBut_31->setText("");
        ui->KeyBoardBut_32->setText("");
        ui->KeyBoardBut_33->setText("");
        ui->KeyBoardBut_34->setText("");
        ui->KeyBoardBut_35->setText("");
        ui->KeyBoardBut_36->setText("");
        ui->KeyBoardBut_37->setText("");
        ui->KeyBoardBut_38->setText("");
        ui->KeyBoardBut_39->setText("");
        ui->KeyBoardBut_41->setText("");
        ui->KeyBoardBut_42->setText("");
        ui->KeyBoardBut_43->setText("");
        ui->KeyBoardBut_44->setText("");
        ui->KeyBoardBut_45->setText("");
        ui->KeyBoardBut_46->setText("");
        ui->KeyBoardBut_47->setText("");
        ui->KeyBoardBut_48->setText("");
        ui->KeyBoardBut_49->setText("");

        ui->KeyBoardBut_18->setEnabled(false);   //делаю недоступными
        ui->KeyBoardBut_19->setEnabled(false);
        ui->KeyBoardBut_20->setEnabled(false);
        ui->KeyBoardBut_21->setEnabled(false);
        ui->KeyBoardBut_22->setEnabled(false);
        ui->KeyBoardBut_23->setEnabled(false);
        ui->KeyBoardBut_24->setEnabled(false);
        ui->KeyBoardBut_25->setEnabled(false);
        ui->KeyBoardBut_26->setEnabled(false);
        ui->KeyBoardBut_27->setEnabled(false);
        ui->KeyBoardBut_28->setEnabled(false);
        ui->KeyBoardBut_29->setEnabled(false);
        ui->KeyBoardBut_30->setEnabled(false);
        ui->KeyBoardBut_31->setEnabled(false);
        ui->KeyBoardBut_32->setEnabled(false);
        ui->KeyBoardBut_33->setEnabled(false);
        ui->KeyBoardBut_34->setEnabled(false);
        ui->KeyBoardBut_35->setEnabled(false);
        ui->KeyBoardBut_36->setEnabled(false);
        ui->KeyBoardBut_37->setEnabled(false);
        ui->KeyBoardBut_38->setEnabled(false);
        ui->KeyBoardBut_39->setEnabled(false);
        ui->KeyBoardBut_41->setEnabled(false);
        ui->KeyBoardBut_42->setEnabled(false);
        ui->KeyBoardBut_43->setEnabled(false);
        ui->KeyBoardBut_44->setEnabled(false);
        ui->KeyBoardBut_45->setEnabled(false);
        ui->KeyBoardBut_46->setEnabled(false);
        ui->KeyBoardBut_47->setEnabled(false);
        ui->KeyBoardBut_48->setEnabled(false);
        ui->KeyBoardBut_49->setEnabled(false);

        ui->KeyBoardBut_40->setEnabled(false);//убираю капс и языки
        ui->KeyBoardBut_51->setEnabled(false);
        ui->KeyBoardBut_53->setEnabled(false);
        ui->KeyBoardBut_54->setEnabled(false);
        ui->KeyBoardBut_55->setEnabled(false);

        specSymbol++;
        ui->widgetPic_6->setStyleSheet("border: 2px solid #d6d6d6;\n background-color:rgb(194, 0, 0);");


        return;

    }

    if(specSymbol == 1){ // при выходе из режима спец символов

        ui->KeyBoardBut_18->setEnabled(true);   //делаю доступными
        ui->KeyBoardBut_19->setEnabled(true);
        ui->KeyBoardBut_20->setEnabled(true);
        ui->KeyBoardBut_21->setEnabled(true);
        ui->KeyBoardBut_22->setEnabled(true);
        ui->KeyBoardBut_23->setEnabled(true);
        ui->KeyBoardBut_24->setEnabled(true);
        ui->KeyBoardBut_25->setEnabled(true);
        ui->KeyBoardBut_26->setEnabled(true);
        ui->KeyBoardBut_27->setEnabled(true);
        ui->KeyBoardBut_28->setEnabled(true);
        ui->KeyBoardBut_29->setEnabled(true);
        ui->KeyBoardBut_30->setEnabled(true);
        ui->KeyBoardBut_31->setEnabled(true);
        ui->KeyBoardBut_32->setEnabled(true);
        ui->KeyBoardBut_33->setEnabled(true);
        ui->KeyBoardBut_34->setEnabled(true);
        ui->KeyBoardBut_35->setEnabled(true);
        ui->KeyBoardBut_36->setEnabled(true);
        ui->KeyBoardBut_37->setEnabled(true);
        ui->KeyBoardBut_38->setEnabled(true);
        ui->KeyBoardBut_39->setEnabled(true);
        ui->KeyBoardBut_41->setEnabled(true);
        ui->KeyBoardBut_42->setEnabled(true);
        ui->KeyBoardBut_43->setEnabled(true);
        ui->KeyBoardBut_44->setEnabled(true);
        ui->KeyBoardBut_45->setEnabled(true);
        ui->KeyBoardBut_46->setEnabled(true);
        ui->KeyBoardBut_47->setEnabled(true);
        ui->KeyBoardBut_48->setEnabled(true);
        ui->KeyBoardBut_49->setEnabled(true);

        ui->KeyBoardBut_40->setEnabled(true);//возвращаю капс и языки
        ui->KeyBoardBut_51->setEnabled(true);
        ui->KeyBoardBut_53->setEnabled(true);
        ui->KeyBoardBut_54->setEnabled(true);
        ui->KeyBoardBut_55->setEnabled(true);

        changeKeyBoardLang();

        ui->KeyBoardBut_2->setText("1");
        ui->KeyBoardBut_3->setText("2");
        ui->KeyBoardBut_4->setText("3");
        ui->KeyBoardBut_5->setText("4");
        ui->KeyBoardBut_6->setText("5");
        ui->KeyBoardBut_7->setText("6");
        ui->KeyBoardBut_8->setText("7");
        ui->KeyBoardBut_9->setText("8");
        ui->KeyBoardBut_10->setText("9");
        ui->KeyBoardBut_11->setText("0");
        ui->KeyBoardBut_12->setText("-");
        ui->KeyBoardBut_26->setText("_");
        ui->KeyBoardBut_38->setText(".");
        ui->KeyBoardBut_39->setText(",");


        specSymbol--;
        ui->widgetPic_6->setStyleSheet("border: 2px solid #d6d6d6;\n background-color:rgb(255, 255, 255);");

    }
}

//Ukr
void MainWindow::on_KeyBoardBut_53_clicked()
{
    langForKeyBoard = 0;
    ui->widgetPic_3->setStyleSheet("border: 2px solid #d6d6d6;\n background-color:rgb(194, 0, 0);");
    ui->widgetPic_4->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(255, 255, 255);");
    ui->widgetPic_5->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(255, 255, 255);");
    changeKeyBoardLang();
}

//Rus
void MainWindow::on_KeyBoardBut_54_clicked()
{
    langForKeyBoard = 1;
    ui->widgetPic_3->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(255, 255, 255);");
    ui->widgetPic_4->setStyleSheet("border: 2px solid #d6d6d6;\n background-color:rgb(194, 0, 0);");
    ui->widgetPic_5->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(255, 255, 255);");
    changeKeyBoardLang();
}

//Eng
void MainWindow::on_KeyBoardBut_55_clicked()
{
    langForKeyBoard = 2;
    ui->widgetPic_3->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(255, 255, 255);");
    ui->widgetPic_4->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(255, 255, 255);");
    ui->widgetPic_5->setStyleSheet("border: 2px solid #d6d6d6;\n background-color:rgb(194, 0, 0);");

    changeKeyBoardLang();


}

//Функция, которая правильно подписывает кнопки исходя из текущих настроек
void MainWindow::changeKeyBoardLang(){
    if(langForKeyBoard == 0 && capslock == 0){

        ui->KeyBoardBut_38->setEnabled(true);
        ui->KeyBoardBut_39->setEnabled(true);
        ui->KeyBoardBut_38->setText(".");
        ui->KeyBoardBut_39->setText(",");

        ui->KeyBoardBut_1->setText("ґ");
        ui->KeyBoardBut_14->setText("й");
        ui->KeyBoardBut_15->setText("ц");
        ui->KeyBoardBut_16->setText("у");
        ui->KeyBoardBut_17->setText("к");
        ui->KeyBoardBut_18->setText("е");
        ui->KeyBoardBut_19->setText("н");
        ui->KeyBoardBut_20->setText("г");
        ui->KeyBoardBut_21->setText("ш");
        ui->KeyBoardBut_22->setText("щ");
        ui->KeyBoardBut_23->setText("з");
        ui->KeyBoardBut_24->setText("х");
        ui->KeyBoardBut_25->setText("ї");
        ui->KeyBoardBut_27->setText("ф");
        ui->KeyBoardBut_28->setText("і");
        ui->KeyBoardBut_29->setText("в");
        ui->KeyBoardBut_30->setText("а");
        ui->KeyBoardBut_31->setText("п");
        ui->KeyBoardBut_32->setText("р");
        ui->KeyBoardBut_33->setText("о");
        ui->KeyBoardBut_34->setText("л");
        ui->KeyBoardBut_35->setText("д");
        ui->KeyBoardBut_36->setText("ж");
        ui->KeyBoardBut_37->setText("є");
        ui->KeyBoardBut_41->setText("я");
        ui->KeyBoardBut_42->setText("ч");
        ui->KeyBoardBut_43->setText("с");
        ui->KeyBoardBut_44->setText("м");
        ui->KeyBoardBut_45->setText("и");
        ui->KeyBoardBut_46->setText("т");
        ui->KeyBoardBut_47->setText("ь");
        ui->KeyBoardBut_48->setText("б");
        ui->KeyBoardBut_49->setText("ю");
        ui->KeyBoardBut_52->setText("Пробіл");
    }
    if(langForKeyBoard == 1 && capslock == 0){

        ui->KeyBoardBut_38->setEnabled(true);
        ui->KeyBoardBut_39->setEnabled(true);
        ui->KeyBoardBut_38->setText(".");
        ui->KeyBoardBut_39->setText(",");

        ui->KeyBoardBut_1->setText("ё");
        ui->KeyBoardBut_14->setText("й");
        ui->KeyBoardBut_15->setText("ц");
        ui->KeyBoardBut_16->setText("у");
        ui->KeyBoardBut_17->setText("к");
        ui->KeyBoardBut_18->setText("е");
        ui->KeyBoardBut_19->setText("н");
        ui->KeyBoardBut_20->setText("г");
        ui->KeyBoardBut_21->setText("ш");
        ui->KeyBoardBut_22->setText("щ");
        ui->KeyBoardBut_23->setText("з");
        ui->KeyBoardBut_24->setText("х");
        ui->KeyBoardBut_25->setText("ъ");
        ui->KeyBoardBut_27->setText("ф");
        ui->KeyBoardBut_28->setText("ы");
        ui->KeyBoardBut_29->setText("в");
        ui->KeyBoardBut_30->setText("а");
        ui->KeyBoardBut_31->setText("п");
        ui->KeyBoardBut_32->setText("р");
        ui->KeyBoardBut_33->setText("о");
        ui->KeyBoardBut_34->setText("л");
        ui->KeyBoardBut_35->setText("д");
        ui->KeyBoardBut_36->setText("ж");
        ui->KeyBoardBut_37->setText("э");
        ui->KeyBoardBut_41->setText("я");
        ui->KeyBoardBut_42->setText("ч");
        ui->KeyBoardBut_43->setText("с");
        ui->KeyBoardBut_44->setText("м");
        ui->KeyBoardBut_45->setText("и");
        ui->KeyBoardBut_46->setText("т");
        ui->KeyBoardBut_47->setText("ь");
        ui->KeyBoardBut_48->setText("б");
        ui->KeyBoardBut_49->setText("ю");
        ui->KeyBoardBut_52->setText("Пробел");
    }
    if(langForKeyBoard == 2 && capslock == 0){

        ui->KeyBoardBut_1->setText("`");
        ui->KeyBoardBut_14->setText("q");
        ui->KeyBoardBut_15->setText("w");
        ui->KeyBoardBut_16->setText("e");
        ui->KeyBoardBut_17->setText("r");
        ui->KeyBoardBut_18->setText("t");
        ui->KeyBoardBut_19->setText("y");
        ui->KeyBoardBut_20->setText("u");
        ui->KeyBoardBut_21->setText("i");
        ui->KeyBoardBut_22->setText("o");
        ui->KeyBoardBut_23->setText("p");
        ui->KeyBoardBut_24->setText("[");
        ui->KeyBoardBut_25->setText("]");
        ui->KeyBoardBut_27->setText("a");
        ui->KeyBoardBut_28->setText("s");
        ui->KeyBoardBut_29->setText("d");
        ui->KeyBoardBut_30->setText("f");
        ui->KeyBoardBut_31->setText("g");
        ui->KeyBoardBut_32->setText("h");
        ui->KeyBoardBut_33->setText("j");
        ui->KeyBoardBut_34->setText("k");
        ui->KeyBoardBut_35->setText("l");
        ui->KeyBoardBut_36->setText(";");
        ui->KeyBoardBut_37->setText("\'");
        ui->KeyBoardBut_41->setText("z");
        ui->KeyBoardBut_42->setText("x");
        ui->KeyBoardBut_43->setText("c");
        ui->KeyBoardBut_44->setText("v");
        ui->KeyBoardBut_45->setText("b");
        ui->KeyBoardBut_46->setText("n");
        ui->KeyBoardBut_47->setText("m");
        ui->KeyBoardBut_48->setText(",");
        ui->KeyBoardBut_49->setText(".");
        ui->KeyBoardBut_52->setText("Space");


        ui->KeyBoardBut_38->setText("");
        ui->KeyBoardBut_39->setText("");
        ui->KeyBoardBut_38->setEnabled(false);
        ui->KeyBoardBut_39->setEnabled(false);
    }
    if(capslock == 1){
        Caps();
    }
}
void MainWindow::Caps(){
    if(langForKeyBoard == 0 && capslock == 1){

        ui->KeyBoardBut_38->setEnabled(true);
        ui->KeyBoardBut_39->setEnabled(true);
        ui->KeyBoardBut_38->setText(".");
        ui->KeyBoardBut_39->setText(",");

        ui->KeyBoardBut_1->setText("Ґ");
        ui->KeyBoardBut_14->setText("Й");
        ui->KeyBoardBut_15->setText("Ц");
        ui->KeyBoardBut_16->setText("У");
        ui->KeyBoardBut_17->setText("К");
        ui->KeyBoardBut_18->setText("Е");
        ui->KeyBoardBut_19->setText("Н");
        ui->KeyBoardBut_20->setText("Г");
        ui->KeyBoardBut_21->setText("Ш");
        ui->KeyBoardBut_22->setText("Щ");
        ui->KeyBoardBut_23->setText("З");
        ui->KeyBoardBut_24->setText("Х");
        ui->KeyBoardBut_25->setText("Ї");
        ui->KeyBoardBut_27->setText("Ф");
        ui->KeyBoardBut_28->setText("І");
        ui->KeyBoardBut_29->setText("В");
        ui->KeyBoardBut_30->setText("А");
        ui->KeyBoardBut_31->setText("П");
        ui->KeyBoardBut_32->setText("Р");
        ui->KeyBoardBut_33->setText("О");
        ui->KeyBoardBut_34->setText("Л");
        ui->KeyBoardBut_35->setText("Д");
        ui->KeyBoardBut_36->setText("Ж");
        ui->KeyBoardBut_37->setText("Є");
        ui->KeyBoardBut_41->setText("Я");
        ui->KeyBoardBut_42->setText("Ч");
        ui->KeyBoardBut_43->setText("С");
        ui->KeyBoardBut_44->setText("М");
        ui->KeyBoardBut_45->setText("И");
        ui->KeyBoardBut_46->setText("Т");
        ui->KeyBoardBut_47->setText("Ь");
        ui->KeyBoardBut_48->setText("Б");
        ui->KeyBoardBut_49->setText("Ю");
        ui->KeyBoardBut_52->setText("ПРОБІЛ");
    }
    if(langForKeyBoard == 1 && capslock == 1){

        ui->KeyBoardBut_38->setEnabled(true);
        ui->KeyBoardBut_39->setEnabled(true);
        ui->KeyBoardBut_38->setText(".");
        ui->KeyBoardBut_39->setText(",");

        ui->KeyBoardBut_1->setText("Ё");
        ui->KeyBoardBut_14->setText("Й");
        ui->KeyBoardBut_15->setText("Ц");
        ui->KeyBoardBut_16->setText("У");
        ui->KeyBoardBut_17->setText("К");
        ui->KeyBoardBut_18->setText("Е");
        ui->KeyBoardBut_19->setText("Н");
        ui->KeyBoardBut_20->setText("Г");
        ui->KeyBoardBut_21->setText("Ш");
        ui->KeyBoardBut_22->setText("Щ");
        ui->KeyBoardBut_23->setText("З");
        ui->KeyBoardBut_24->setText("Х");
        ui->KeyBoardBut_25->setText("Ъ");
        ui->KeyBoardBut_27->setText("Ф");
        ui->KeyBoardBut_28->setText("Ы");
        ui->KeyBoardBut_29->setText("В");
        ui->KeyBoardBut_30->setText("А");
        ui->KeyBoardBut_31->setText("П");
        ui->KeyBoardBut_32->setText("Р");
        ui->KeyBoardBut_33->setText("О");
        ui->KeyBoardBut_34->setText("Л");
        ui->KeyBoardBut_35->setText("Д");
        ui->KeyBoardBut_36->setText("Ж");
        ui->KeyBoardBut_37->setText("Є");
        ui->KeyBoardBut_41->setText("Я");
        ui->KeyBoardBut_42->setText("Ч");
        ui->KeyBoardBut_43->setText("С");
        ui->KeyBoardBut_44->setText("М");
        ui->KeyBoardBut_45->setText("И");
        ui->KeyBoardBut_46->setText("Т");
        ui->KeyBoardBut_47->setText("Ь");
        ui->KeyBoardBut_48->setText("Б");
        ui->KeyBoardBut_49->setText("Ю");
        ui->KeyBoardBut_52->setText("ПРОБЕЛ");
    }
    if(langForKeyBoard == 2 && capslock == 1){

        ui->KeyBoardBut_1->setText("`");
        ui->KeyBoardBut_14->setText("Q");
        ui->KeyBoardBut_15->setText("W");
        ui->KeyBoardBut_16->setText("E");
        ui->KeyBoardBut_17->setText("R");
        ui->KeyBoardBut_18->setText("T");
        ui->KeyBoardBut_19->setText("Y");
        ui->KeyBoardBut_20->setText("U");
        ui->KeyBoardBut_21->setText("I");
        ui->KeyBoardBut_22->setText("O");
        ui->KeyBoardBut_23->setText("P");
        ui->KeyBoardBut_24->setText("{");
        ui->KeyBoardBut_25->setText("}");
        ui->KeyBoardBut_27->setText("A");
        ui->KeyBoardBut_28->setText("S");
        ui->KeyBoardBut_29->setText("D");
        ui->KeyBoardBut_30->setText("F");
        ui->KeyBoardBut_31->setText("G");
        ui->KeyBoardBut_32->setText("H");
        ui->KeyBoardBut_33->setText("J");
        ui->KeyBoardBut_34->setText("K");
        ui->KeyBoardBut_35->setText("L");
        ui->KeyBoardBut_36->setText(":");
        ui->KeyBoardBut_37->setText("\"");
        ui->KeyBoardBut_41->setText("Z");
        ui->KeyBoardBut_42->setText("X");
        ui->KeyBoardBut_43->setText("C");
        ui->KeyBoardBut_44->setText("V");
        ui->KeyBoardBut_45->setText("B");
        ui->KeyBoardBut_46->setText("N");
        ui->KeyBoardBut_47->setText("M");
        ui->KeyBoardBut_48->setText("<");
        ui->KeyBoardBut_49->setText(">");
        ui->KeyBoardBut_52->setText("SPACE");


        ui->KeyBoardBut_38->setText("");
        ui->KeyBoardBut_39->setText("");
        ui->KeyBoardBut_38->setEnabled(false);
        ui->KeyBoardBut_39->setEnabled(false);
    }
    if(capslock == 0)
        changeKeyBoardLang();
}
//Shift нажимают
void MainWindow::on_KeyBoardBut_51_pressed()
{
    ui->widgetPic_2->setStyleSheet("border: 2px solid #d6d6d6;\n background-color:rgb(194, 0, 0);");
    if(langForKeyBoard == 0){

            ui->KeyBoardBut_1->setText("Ґ");
            ui->KeyBoardBut_14->setText("Й");
            ui->KeyBoardBut_15->setText("Ц");
            ui->KeyBoardBut_16->setText("У");
            ui->KeyBoardBut_17->setText("К");
            ui->KeyBoardBut_18->setText("Е");
            ui->KeyBoardBut_19->setText("Н");
            ui->KeyBoardBut_20->setText("Г");
            ui->KeyBoardBut_21->setText("Ш");
            ui->KeyBoardBut_22->setText("Щ");
            ui->KeyBoardBut_23->setText("З");
            ui->KeyBoardBut_24->setText("Х");
            ui->KeyBoardBut_25->setText("Ї");
            ui->KeyBoardBut_27->setText("Ф");
            ui->KeyBoardBut_28->setText("І");
            ui->KeyBoardBut_29->setText("В");
            ui->KeyBoardBut_30->setText("А");
            ui->KeyBoardBut_31->setText("П");
            ui->KeyBoardBut_32->setText("Р");
            ui->KeyBoardBut_33->setText("О");
            ui->KeyBoardBut_34->setText("Л");
            ui->KeyBoardBut_35->setText("Д");
            ui->KeyBoardBut_36->setText("Ж");
            ui->KeyBoardBut_37->setText("Є");
            ui->KeyBoardBut_41->setText("Я");
            ui->KeyBoardBut_42->setText("Ч");
            ui->KeyBoardBut_43->setText("С");
            ui->KeyBoardBut_44->setText("М");
            ui->KeyBoardBut_45->setText("И");
            ui->KeyBoardBut_46->setText("Т");
            ui->KeyBoardBut_47->setText("Ь");
            ui->KeyBoardBut_48->setText("Б");
            ui->KeyBoardBut_49->setText("Ю");
            ui->KeyBoardBut_52->setText("ПРОБІЛ");
        }
        if(langForKeyBoard == 1){

            ui->KeyBoardBut_1->setText("Ё");
            ui->KeyBoardBut_14->setText("Й");
            ui->KeyBoardBut_15->setText("Ц");
            ui->KeyBoardBut_16->setText("У");
            ui->KeyBoardBut_17->setText("К");
            ui->KeyBoardBut_18->setText("Е");
            ui->KeyBoardBut_19->setText("Н");
            ui->KeyBoardBut_20->setText("Г");
            ui->KeyBoardBut_21->setText("Ш");
            ui->KeyBoardBut_22->setText("Щ");
            ui->KeyBoardBut_23->setText("З");
            ui->KeyBoardBut_24->setText("Х");
            ui->KeyBoardBut_25->setText("Ъ");
            ui->KeyBoardBut_27->setText("Ф");
            ui->KeyBoardBut_28->setText("Ы");
            ui->KeyBoardBut_29->setText("В");
            ui->KeyBoardBut_30->setText("А");
            ui->KeyBoardBut_31->setText("П");
            ui->KeyBoardBut_32->setText("Р");
            ui->KeyBoardBut_33->setText("О");
            ui->KeyBoardBut_34->setText("Л");
            ui->KeyBoardBut_35->setText("Д");
            ui->KeyBoardBut_36->setText("Ж");
            ui->KeyBoardBut_37->setText("Є");
            ui->KeyBoardBut_41->setText("Я");
            ui->KeyBoardBut_42->setText("Ч");
            ui->KeyBoardBut_43->setText("С");
            ui->KeyBoardBut_44->setText("М");
            ui->KeyBoardBut_45->setText("И");
            ui->KeyBoardBut_46->setText("Т");
            ui->KeyBoardBut_47->setText("Ь");
            ui->KeyBoardBut_48->setText("Б");
            ui->KeyBoardBut_49->setText("Ю");
            ui->KeyBoardBut_52->setText("ПРОБЕЛ");
        }
        if(langForKeyBoard == 2){

            ui->KeyBoardBut_1->setText("`");
            ui->KeyBoardBut_14->setText("Q");
            ui->KeyBoardBut_15->setText("W");
            ui->KeyBoardBut_16->setText("E");
            ui->KeyBoardBut_17->setText("R");
            ui->KeyBoardBut_18->setText("T");
            ui->KeyBoardBut_19->setText("Y");
            ui->KeyBoardBut_20->setText("U");
            ui->KeyBoardBut_21->setText("I");
            ui->KeyBoardBut_22->setText("O");
            ui->KeyBoardBut_23->setText("P");
            ui->KeyBoardBut_24->setText("{");
            ui->KeyBoardBut_25->setText("}");
            ui->KeyBoardBut_27->setText("A");
            ui->KeyBoardBut_28->setText("S");
            ui->KeyBoardBut_29->setText("D");
            ui->KeyBoardBut_30->setText("F");
            ui->KeyBoardBut_31->setText("G");
            ui->KeyBoardBut_32->setText("H");
            ui->KeyBoardBut_33->setText("J");
            ui->KeyBoardBut_34->setText("K");
            ui->KeyBoardBut_35->setText("L");
            ui->KeyBoardBut_36->setText(":");
            ui->KeyBoardBut_37->setText("\"");
            ui->KeyBoardBut_41->setText("Z");
            ui->KeyBoardBut_42->setText("X");
            ui->KeyBoardBut_43->setText("C");
            ui->KeyBoardBut_44->setText("V");
            ui->KeyBoardBut_45->setText("B");
            ui->KeyBoardBut_46->setText("N");
            ui->KeyBoardBut_47->setText("M");
            ui->KeyBoardBut_48->setText("<");
            ui->KeyBoardBut_49->setText(">");
            ui->KeyBoardBut_52->setText("SPACE");
        }


}
//Shift отпускают
void MainWindow::on_KeyBoardBut_51_released()
{
    ui->widgetPic_2->setStyleSheet("border: 2px solid #d6d6d6;\n background-color:rgb(255, 255, 255);");
    if(langForKeyBoard == 0){

        ui->KeyBoardBut_1->setText("ґ");
        ui->KeyBoardBut_14->setText("й");
        ui->KeyBoardBut_15->setText("ц");
        ui->KeyBoardBut_16->setText("у");
        ui->KeyBoardBut_17->setText("к");
        ui->KeyBoardBut_18->setText("е");
        ui->KeyBoardBut_19->setText("н");
        ui->KeyBoardBut_20->setText("г");
        ui->KeyBoardBut_21->setText("ш");
        ui->KeyBoardBut_22->setText("щ");
        ui->KeyBoardBut_23->setText("з");
        ui->KeyBoardBut_24->setText("х");
        ui->KeyBoardBut_25->setText("ї");
        ui->KeyBoardBut_27->setText("ф");
        ui->KeyBoardBut_28->setText("і");
        ui->KeyBoardBut_29->setText("в");
        ui->KeyBoardBut_30->setText("а");
        ui->KeyBoardBut_31->setText("п");
        ui->KeyBoardBut_32->setText("р");
        ui->KeyBoardBut_33->setText("о");
        ui->KeyBoardBut_34->setText("л");
        ui->KeyBoardBut_35->setText("д");
        ui->KeyBoardBut_36->setText("ж");
        ui->KeyBoardBut_37->setText("є");
        ui->KeyBoardBut_41->setText("я");
        ui->KeyBoardBut_42->setText("ч");
        ui->KeyBoardBut_43->setText("с");
        ui->KeyBoardBut_44->setText("м");
        ui->KeyBoardBut_45->setText("и");
        ui->KeyBoardBut_46->setText("т");
        ui->KeyBoardBut_47->setText("ь");
        ui->KeyBoardBut_48->setText("б");
        ui->KeyBoardBut_49->setText("ю");
        ui->KeyBoardBut_52->setText("Пробіл");
    }
    if(langForKeyBoard == 1){

        ui->KeyBoardBut_1->setText("ё");
        ui->KeyBoardBut_14->setText("й");
        ui->KeyBoardBut_15->setText("ц");
        ui->KeyBoardBut_16->setText("у");
        ui->KeyBoardBut_17->setText("к");
        ui->KeyBoardBut_18->setText("е");
        ui->KeyBoardBut_19->setText("н");
        ui->KeyBoardBut_20->setText("г");
        ui->KeyBoardBut_21->setText("ш");
        ui->KeyBoardBut_22->setText("щ");
        ui->KeyBoardBut_23->setText("з");
        ui->KeyBoardBut_24->setText("х");
        ui->KeyBoardBut_25->setText("ъ");
        ui->KeyBoardBut_27->setText("ф");
        ui->KeyBoardBut_28->setText("ы");
        ui->KeyBoardBut_29->setText("в");
        ui->KeyBoardBut_30->setText("а");
        ui->KeyBoardBut_31->setText("п");
        ui->KeyBoardBut_32->setText("р");
        ui->KeyBoardBut_33->setText("о");
        ui->KeyBoardBut_34->setText("л");
        ui->KeyBoardBut_35->setText("д");
        ui->KeyBoardBut_36->setText("ж");
        ui->KeyBoardBut_37->setText("э");
        ui->KeyBoardBut_41->setText("я");
        ui->KeyBoardBut_42->setText("ч");
        ui->KeyBoardBut_43->setText("с");
        ui->KeyBoardBut_44->setText("м");
        ui->KeyBoardBut_45->setText("и");
        ui->KeyBoardBut_46->setText("т");
        ui->KeyBoardBut_47->setText("ь");
        ui->KeyBoardBut_48->setText("б");
        ui->KeyBoardBut_49->setText("ю");
        ui->KeyBoardBut_52->setText("Пробел");
    }
    if(langForKeyBoard == 2){

        ui->KeyBoardBut_1->setText("`");
        ui->KeyBoardBut_14->setText("q");
        ui->KeyBoardBut_15->setText("w");
        ui->KeyBoardBut_16->setText("e");
        ui->KeyBoardBut_17->setText("r");
        ui->KeyBoardBut_18->setText("t");
        ui->KeyBoardBut_19->setText("y");
        ui->KeyBoardBut_20->setText("u");
        ui->KeyBoardBut_21->setText("i");
        ui->KeyBoardBut_22->setText("o");
        ui->KeyBoardBut_23->setText("p");
        ui->KeyBoardBut_24->setText("[");
        ui->KeyBoardBut_25->setText("]");
        ui->KeyBoardBut_27->setText("a");
        ui->KeyBoardBut_28->setText("s");
        ui->KeyBoardBut_29->setText("d");
        ui->KeyBoardBut_30->setText("f");
        ui->KeyBoardBut_31->setText("g");
        ui->KeyBoardBut_32->setText("h");
        ui->KeyBoardBut_33->setText("j");
        ui->KeyBoardBut_34->setText("k");
        ui->KeyBoardBut_35->setText("l");
        ui->KeyBoardBut_36->setText(";");
        ui->KeyBoardBut_37->setText("\'");
        ui->KeyBoardBut_41->setText("z");
        ui->KeyBoardBut_42->setText("x");
        ui->KeyBoardBut_43->setText("c");
        ui->KeyBoardBut_44->setText("v");
        ui->KeyBoardBut_45->setText("b");
        ui->KeyBoardBut_46->setText("n");
        ui->KeyBoardBut_47->setText("m");
        ui->KeyBoardBut_48->setText(",");
        ui->KeyBoardBut_49->setText(".");
        ui->KeyBoardBut_52->setText("Space");
    }
}
//При нажатии на поиск
bool MainWindow::eventFilter(QObject *object, QEvent *event)
{
    if(object == ui->lineEditFind && event->type() == QEvent::MouseButtonPress)
    {
       QMouseEvent* mouseEvent = dynamic_cast<QMouseEvent*>(event);
       if(mouseEvent != 0)
       {
          ui->widget->show();
          ui->widgetInfoLang->hide();
       }
    }


    return QMainWindow::eventFilter(object, event);
}
//Выход из режима клавиатуры
void MainWindow::on_LogoBut_clicked()
{
    ui->widget->hide();
    ui->widgetInfoLang->show();
}
//дальше действия ко всем кнопкам на клавиатуре для изменения текстового поля
void MainWindow::on_KeyBoardBut_1_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_1->text());
}

void MainWindow::on_KeyBoardBut_2_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_2->text());
}

void MainWindow::on_KeyBoardBut_3_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_3->text());
}

void MainWindow::on_KeyBoardBut_4_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_4->text());
}

void MainWindow::on_KeyBoardBut_5_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_5->text());
}

void MainWindow::on_KeyBoardBut_6_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_6->text());
}

void MainWindow::on_KeyBoardBut_7_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_7->text());
}

void MainWindow::on_KeyBoardBut_8_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_8->text());
}

void MainWindow::on_KeyBoardBut_9_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_9->text());
}

void MainWindow::on_KeyBoardBut_10_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_10->text());
}

void MainWindow::on_KeyBoardBut_11_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_11->text());
}

void MainWindow::on_KeyBoardBut_12_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_12->text());
}

void MainWindow::on_KeyBoardBut_14_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_14->text());
}

void MainWindow::on_KeyBoardBut_15_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_15->text());
}

void MainWindow::on_KeyBoardBut_16_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_16->text());
}

void MainWindow::on_KeyBoardBut_17_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_17->text());
}

void MainWindow::on_KeyBoardBut_18_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_18->text());
}

void MainWindow::on_KeyBoardBut_19_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_19->text());
}

void MainWindow::on_KeyBoardBut_20_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_20->text());
}

void MainWindow::on_KeyBoardBut_21_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_21->text());
}

void MainWindow::on_KeyBoardBut_22_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_22->text());
}

void MainWindow::on_KeyBoardBut_23_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_23->text());
}

void MainWindow::on_KeyBoardBut_24_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_24->text());
}

void MainWindow::on_KeyBoardBut_25_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_25->text());
}

void MainWindow::on_KeyBoardBut_26_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_26->text());
}

void MainWindow::on_KeyBoardBut_27_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_27->text());
}

void MainWindow::on_KeyBoardBut_28_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_28->text());
}

void MainWindow::on_KeyBoardBut_29_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_29->text());
}

void MainWindow::on_KeyBoardBut_30_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_30->text());
}

void MainWindow::on_KeyBoardBut_31_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_31->text());
}

void MainWindow::on_KeyBoardBut_32_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_32->text());
}

void MainWindow::on_KeyBoardBut_33_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_33->text());
}

void MainWindow::on_KeyBoardBut_34_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_34->text());
}

void MainWindow::on_KeyBoardBut_35_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_35->text());
}

void MainWindow::on_KeyBoardBut_36_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_36->text());
}

void MainWindow::on_KeyBoardBut_37_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_37->text());
}

void MainWindow::on_KeyBoardBut_38_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_38->text());
}

void MainWindow::on_KeyBoardBut_39_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_39->text());
}

void MainWindow::on_KeyBoardBut_41_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_41->text());
}

void MainWindow::on_KeyBoardBut_42_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_42->text());
}

void MainWindow::on_KeyBoardBut_43_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_43->text());
}

void MainWindow::on_KeyBoardBut_44_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_44->text());
}

void MainWindow::on_KeyBoardBut_45_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_45->text());
}

void MainWindow::on_KeyBoardBut_46_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_46->text());
}

void MainWindow::on_KeyBoardBut_47_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_47->text());
}

void MainWindow::on_KeyBoardBut_48_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_48->text());
}

void MainWindow::on_KeyBoardBut_49_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + ui->KeyBoardBut_49->text());
}

void MainWindow::on_KeyBoardBut_52_clicked()
{
    ui->lineEditFind->setText(ui->lineEditFind->text() + " ");
}

void MainWindow::on_KeyBoardBut_13_clicked()
{
    QString str;
    str = ui->lineEditFind->text();
    str.remove(str.length()-1, 1);
    ui->lineEditFind->setText(str);
}
