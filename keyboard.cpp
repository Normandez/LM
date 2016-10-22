#include "keyboard.h"
#include "ui_keyboard.h"
#include <QDebug>

Keyboard::Keyboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Keyboard)
{
    ui->setupUi(this);
    lang = 1;
    capslock = 0;
}

Keyboard::~Keyboard()
{
    delete ui;
}

void Keyboard::on_pushButton_53_clicked()
{
    lang = 0;
    ui->widget_3->setStyleSheet("border: 2px solid #d6d6d6;\n background-color:rgb(194, 0, 0);");
    ui->widget_4->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(255, 255, 255);");
    ui->widget_5->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(255, 255, 255);");
    changeKeyLang();
}

void Keyboard::on_pushButton_54_clicked()
{
    lang = 1;
    ui->widget_3->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(255, 255, 255);");
    ui->widget_4->setStyleSheet("border: 2px solid #d6d6d6;\n background-color:rgb(194, 0, 0);");
    ui->widget_5->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(255, 255, 255);");
    changeKeyLang();
}

void Keyboard::on_pushButton_55_clicked()
{
    lang = 2;
    ui->widget_3->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(255, 255, 255);");
    ui->widget_4->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(255, 255, 255);");
    ui->widget_5->setStyleSheet("border: 2px solid #d6d6d6;\n background-color:rgb(194, 0, 0);");
    changeKeyLang();
}
void Keyboard::changeKeyLang(){
    if(lang == 0 && capslock == 0){

        ui->pushButton->setText("ґ");
        ui->pushButton_14->setText("й");
        ui->pushButton_15->setText("ц");
        ui->pushButton_16->setText("у");
        ui->pushButton_17->setText("к");
        ui->pushButton_18->setText("е");
        ui->pushButton_19->setText("н");
        ui->pushButton_20->setText("г");
        ui->pushButton_21->setText("ш");
        ui->pushButton_22->setText("щ");
        ui->pushButton_23->setText("з");
        ui->pushButton_24->setText("х");
        ui->pushButton_25->setText("ї");
        ui->pushButton_27->setText("ф");
        ui->pushButton_28->setText("і");
        ui->pushButton_29->setText("в");
        ui->pushButton_30->setText("а");
        ui->pushButton_31->setText("п");
        ui->pushButton_32->setText("р");
        ui->pushButton_33->setText("о");
        ui->pushButton_34->setText("л");
        ui->pushButton_35->setText("д");
        ui->pushButton_36->setText("ж");
        ui->pushButton_37->setText("є");
        ui->pushButton_41->setText("я");
        ui->pushButton_42->setText("ч");
        ui->pushButton_43->setText("с");
        ui->pushButton_44->setText("м");
        ui->pushButton_45->setText("и");
        ui->pushButton_46->setText("т");
        ui->pushButton_47->setText("ь");
        ui->pushButton_48->setText("б");
        ui->pushButton_49->setText("ю");
        ui->pushButton_52->setText("Пробіл");
    }
    if(lang == 1 && capslock == 0){

        ui->pushButton->setText("ё");
        ui->pushButton_14->setText("й");
        ui->pushButton_15->setText("ц");
        ui->pushButton_16->setText("у");
        ui->pushButton_17->setText("к");
        ui->pushButton_18->setText("е");
        ui->pushButton_19->setText("н");
        ui->pushButton_20->setText("г");
        ui->pushButton_21->setText("ш");
        ui->pushButton_22->setText("щ");
        ui->pushButton_23->setText("з");
        ui->pushButton_24->setText("х");
        ui->pushButton_25->setText("ъ");
        ui->pushButton_27->setText("ф");
        ui->pushButton_28->setText("ы");
        ui->pushButton_29->setText("в");
        ui->pushButton_30->setText("а");
        ui->pushButton_31->setText("п");
        ui->pushButton_32->setText("р");
        ui->pushButton_33->setText("о");
        ui->pushButton_34->setText("л");
        ui->pushButton_35->setText("д");
        ui->pushButton_36->setText("ж");
        ui->pushButton_37->setText("э");
        ui->pushButton_41->setText("я");
        ui->pushButton_42->setText("ч");
        ui->pushButton_43->setText("с");
        ui->pushButton_44->setText("м");
        ui->pushButton_45->setText("и");
        ui->pushButton_46->setText("т");
        ui->pushButton_47->setText("ь");
        ui->pushButton_48->setText("б");
        ui->pushButton_49->setText("ю");
        ui->pushButton_52->setText("Пробел");
    }
    if(lang == 2 && capslock == 0){

        ui->pushButton->setText("`");
        ui->pushButton_14->setText("q");
        ui->pushButton_15->setText("w");
        ui->pushButton_16->setText("e");
        ui->pushButton_17->setText("r");
        ui->pushButton_18->setText("t");
        ui->pushButton_19->setText("y");
        ui->pushButton_20->setText("u");
        ui->pushButton_21->setText("i");
        ui->pushButton_22->setText("o");
        ui->pushButton_23->setText("p");
        ui->pushButton_24->setText("[");
        ui->pushButton_25->setText("]");
        ui->pushButton_27->setText("a");
        ui->pushButton_28->setText("s");
        ui->pushButton_29->setText("d");
        ui->pushButton_30->setText("f");
        ui->pushButton_31->setText("g");
        ui->pushButton_32->setText("h");
        ui->pushButton_33->setText("j");
        ui->pushButton_34->setText("k");
        ui->pushButton_35->setText("l");
        ui->pushButton_36->setText(";");
        ui->pushButton_37->setText("\'");
        ui->pushButton_41->setText("z");
        ui->pushButton_42->setText("x");
        ui->pushButton_43->setText("c");
        ui->pushButton_44->setText("v");
        ui->pushButton_45->setText("b");
        ui->pushButton_46->setText("n");
        ui->pushButton_47->setText("m");
        ui->pushButton_48->setText(",");
        ui->pushButton_49->setText(".");
        ui->pushButton_52->setText("Space");
    }
    if(capslock == 1){
        Caps();
    }

}

void Keyboard::on_pushButton_40_clicked()
{
    if(capslock == 1){
        ui->widget_6->setStyleSheet("border: 2px solid #d6d6d6;\nbackground-color:rgb(255, 255, 255);");
        capslock = 0;
    }
    else{
        ui->widget_6->setStyleSheet("border: 2px solid #d6d6d6;\n background-color:rgb(194, 0, 0);");
        capslock = 1;
    }
    Caps();
}
void Keyboard::Caps(){
    if(lang == 0 && capslock == 1){

        ui->pushButton->setText("Ґ");
        ui->pushButton_14->setText("Й");
        ui->pushButton_15->setText("Ц");
        ui->pushButton_16->setText("У");
        ui->pushButton_17->setText("К");
        ui->pushButton_18->setText("Е");
        ui->pushButton_19->setText("Н");
        ui->pushButton_20->setText("Г");
        ui->pushButton_21->setText("Ш");
        ui->pushButton_22->setText("Щ");
        ui->pushButton_23->setText("З");
        ui->pushButton_24->setText("Х");
        ui->pushButton_25->setText("Ї");
        ui->pushButton_27->setText("Ф");
        ui->pushButton_28->setText("І");
        ui->pushButton_29->setText("В");
        ui->pushButton_30->setText("А");
        ui->pushButton_31->setText("П");
        ui->pushButton_32->setText("Р");
        ui->pushButton_33->setText("О");
        ui->pushButton_34->setText("Л");
        ui->pushButton_35->setText("Д");
        ui->pushButton_36->setText("Ж");
        ui->pushButton_37->setText("Є");
        ui->pushButton_41->setText("Я");
        ui->pushButton_42->setText("Ч");
        ui->pushButton_43->setText("С");
        ui->pushButton_44->setText("М");
        ui->pushButton_45->setText("И");
        ui->pushButton_46->setText("Т");
        ui->pushButton_47->setText("Ь");
        ui->pushButton_48->setText("Б");
        ui->pushButton_49->setText("Ю");
        ui->pushButton_52->setText("ПРОБІЛ");
    }
    if(lang == 1 && capslock == 1){

        ui->pushButton->setText("Ё");
        ui->pushButton_14->setText("Й");
        ui->pushButton_15->setText("Ц");
        ui->pushButton_16->setText("У");
        ui->pushButton_17->setText("К");
        ui->pushButton_18->setText("Е");
        ui->pushButton_19->setText("Н");
        ui->pushButton_20->setText("Г");
        ui->pushButton_21->setText("Ш");
        ui->pushButton_22->setText("Щ");
        ui->pushButton_23->setText("З");
        ui->pushButton_24->setText("Х");
        ui->pushButton_25->setText("Ъ");
        ui->pushButton_27->setText("Ф");
        ui->pushButton_28->setText("Ы");
        ui->pushButton_29->setText("В");
        ui->pushButton_30->setText("А");
        ui->pushButton_31->setText("П");
        ui->pushButton_32->setText("Р");
        ui->pushButton_33->setText("О");
        ui->pushButton_34->setText("Л");
        ui->pushButton_35->setText("Д");
        ui->pushButton_36->setText("Ж");
        ui->pushButton_37->setText("Є");
        ui->pushButton_41->setText("Я");
        ui->pushButton_42->setText("Ч");
        ui->pushButton_43->setText("С");
        ui->pushButton_44->setText("М");
        ui->pushButton_45->setText("И");
        ui->pushButton_46->setText("Т");
        ui->pushButton_47->setText("Ь");
        ui->pushButton_48->setText("Б");
        ui->pushButton_49->setText("Ю");
        ui->pushButton_52->setText("ПРОБЕЛ");
    }
    if(lang == 2 && capslock == 1){

        ui->pushButton->setText("`");
        ui->pushButton_14->setText("Q");
        ui->pushButton_15->setText("W");
        ui->pushButton_16->setText("E");
        ui->pushButton_17->setText("R");
        ui->pushButton_18->setText("T");
        ui->pushButton_19->setText("Y");
        ui->pushButton_20->setText("U");
        ui->pushButton_21->setText("I");
        ui->pushButton_22->setText("O");
        ui->pushButton_23->setText("P");
        ui->pushButton_24->setText("{");
        ui->pushButton_25->setText("}");
        ui->pushButton_27->setText("A");
        ui->pushButton_28->setText("S");
        ui->pushButton_29->setText("D");
        ui->pushButton_30->setText("F");
        ui->pushButton_31->setText("G");
        ui->pushButton_32->setText("H");
        ui->pushButton_33->setText("J");
        ui->pushButton_34->setText("K");
        ui->pushButton_35->setText("L");
        ui->pushButton_36->setText(":");
        ui->pushButton_37->setText("\"");
        ui->pushButton_41->setText("Z");
        ui->pushButton_42->setText("X");
        ui->pushButton_43->setText("C");
        ui->pushButton_44->setText("V");
        ui->pushButton_45->setText("B");
        ui->pushButton_46->setText("N");
        ui->pushButton_47->setText("M");
        ui->pushButton_48->setText("<");
        ui->pushButton_49->setText(">");
        ui->pushButton_52->setText("SPACE");
    }
    if(capslock == 0)
        changeKeyLang();
}
