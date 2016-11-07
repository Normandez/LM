#include "keyboard.h"
#include "ui_keyboard.h"
#include <QDebug>
#include "payment.h"

Keyboard::Keyboard(QWidget *parent, short language, QPixmap pic) :
    QDialog(parent),
    ui(new Ui::Keyboard)
{
    ui->setupUi(this);
    lang = 1;
    capslock = 0;
    specSymbol = 0;

    langOfUI = language;
    SetLanguage();

    picture = pic;
    SetPicture ();

    ui->pushButtonNext->hide();
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

//При нажатии на спец символы
void Keyboard::on_pushButton_50_clicked()
{
    if(specSymbol == 0){//показать спец символы и скрыть остальные
        ui->pushButton->setText("-");
        ui->pushButton_2->setText("+");
        ui->pushButton_3->setText(":");
        ui->pushButton_4->setText(",");
        ui->pushButton_5->setText(".");
        ui->pushButton_6->setText("_");
        ui->pushButton_7->setText("/");
        ui->pushButton_8->setText("|");
        ui->pushButton_9->setText("?");
        ui->pushButton_10->setText("@");
        ui->pushButton_11->setText("{");
        ui->pushButton_12->setText("}");
        ui->pushButton_14->setText("[");
        ui->pushButton_15->setText("]");
        ui->pushButton_16->setText("<");
        ui->pushButton_17->setText(">");

        ui->pushButton_18->setText("");   //убираю текст
        ui->pushButton_19->setText("");
        ui->pushButton_20->setText("");
        ui->pushButton_21->setText("");
        ui->pushButton_22->setText("");
        ui->pushButton_23->setText("");
        ui->pushButton_24->setText("");
        ui->pushButton_25->setText("");
        ui->pushButton_26->setText("");
        ui->pushButton_27->setText("");
        ui->pushButton_28->setText("");
        ui->pushButton_29->setText("");
        ui->pushButton_30->setText("");
        ui->pushButton_31->setText("");
        ui->pushButton_32->setText("");
        ui->pushButton_33->setText("");
        ui->pushButton_34->setText("");
        ui->pushButton_35->setText("");
        ui->pushButton_36->setText("");
        ui->pushButton_37->setText("");
        ui->pushButton_38->setText("");
        ui->pushButton_39->setText("");
        ui->pushButton_41->setText("");
        ui->pushButton_42->setText("");
        ui->pushButton_43->setText("");
        ui->pushButton_44->setText("");
        ui->pushButton_45->setText("");
        ui->pushButton_46->setText("");
        ui->pushButton_47->setText("");
        ui->pushButton_48->setText("");
        ui->pushButton_49->setText("");

        ui->pushButton_18->setEnabled(false);   //делаю недоступными
        ui->pushButton_19->setEnabled(false);
        ui->pushButton_20->setEnabled(false);
        ui->pushButton_21->setEnabled(false);
        ui->pushButton_22->setEnabled(false);
        ui->pushButton_23->setEnabled(false);
        ui->pushButton_24->setEnabled(false);
        ui->pushButton_25->setEnabled(false);
        ui->pushButton_26->setEnabled(false);
        ui->pushButton_27->setEnabled(false);
        ui->pushButton_28->setEnabled(false);
        ui->pushButton_29->setEnabled(false);
        ui->pushButton_30->setEnabled(false);
        ui->pushButton_31->setEnabled(false);
        ui->pushButton_32->setEnabled(false);
        ui->pushButton_33->setEnabled(false);
        ui->pushButton_34->setEnabled(false);
        ui->pushButton_35->setEnabled(false);
        ui->pushButton_36->setEnabled(false);
        ui->pushButton_37->setEnabled(false);
        ui->pushButton_38->setEnabled(false);
        ui->pushButton_39->setEnabled(false);
        ui->pushButton_41->setEnabled(false);
        ui->pushButton_42->setEnabled(false);
        ui->pushButton_43->setEnabled(false);
        ui->pushButton_44->setEnabled(false);
        ui->pushButton_45->setEnabled(false);
        ui->pushButton_46->setEnabled(false);
        ui->pushButton_47->setEnabled(false);
        ui->pushButton_48->setEnabled(false);
        ui->pushButton_49->setEnabled(false);

        ui->pushButton_40->setEnabled(false);//убираю капс и языки
        ui->pushButton_51->setEnabled(false);
        ui->pushButton_53->setEnabled(false);
        ui->pushButton_54->setEnabled(false);
        ui->pushButton_55->setEnabled(false);

        specSymbol++;
        ui->widget_9->setStyleSheet("border: 2px solid #d6d6d6;\n background-color:rgb(194, 0, 0);");

        return;
    }

    if(specSymbol == 1){ // при выходе из режима спец символов

        ui->pushButton_18->setEnabled(true);   //делаю доступными
        ui->pushButton_19->setEnabled(true);
        ui->pushButton_20->setEnabled(true);
        ui->pushButton_21->setEnabled(true);
        ui->pushButton_22->setEnabled(true);
        ui->pushButton_23->setEnabled(true);
        ui->pushButton_24->setEnabled(true);
        ui->pushButton_25->setEnabled(true);
        ui->pushButton_26->setEnabled(true);
        ui->pushButton_27->setEnabled(true);
        ui->pushButton_28->setEnabled(true);
        ui->pushButton_29->setEnabled(true);
        ui->pushButton_30->setEnabled(true);
        ui->pushButton_31->setEnabled(true);
        ui->pushButton_32->setEnabled(true);
        ui->pushButton_33->setEnabled(true);
        ui->pushButton_34->setEnabled(true);
        ui->pushButton_35->setEnabled(true);
        ui->pushButton_36->setEnabled(true);
        ui->pushButton_37->setEnabled(true);
        ui->pushButton_38->setEnabled(true);
        ui->pushButton_39->setEnabled(true);
        ui->pushButton_41->setEnabled(true);
        ui->pushButton_42->setEnabled(true);
        ui->pushButton_43->setEnabled(true);
        ui->pushButton_44->setEnabled(true);
        ui->pushButton_45->setEnabled(true);
        ui->pushButton_46->setEnabled(true);
        ui->pushButton_47->setEnabled(true);
        ui->pushButton_48->setEnabled(true);
        ui->pushButton_49->setEnabled(true);

        ui->pushButton_40->setEnabled(true);//возвращаю капс и языки
        ui->pushButton_51->setEnabled(true);
        ui->pushButton_53->setEnabled(true);
        ui->pushButton_54->setEnabled(true);
        ui->pushButton_55->setEnabled(true);

        changeKeyLang();

        ui->pushButton_2->setText("1");
        ui->pushButton_3->setText("2");
        ui->pushButton_4->setText("3");
        ui->pushButton_5->setText("4");
        ui->pushButton_6->setText("5");
        ui->pushButton_7->setText("6");
        ui->pushButton_8->setText("7");
        ui->pushButton_9->setText("8");
        ui->pushButton_10->setText("9");
        ui->pushButton_11->setText("0");
        ui->pushButton_12->setText("-");
        ui->pushButton_26->setText("_");
        ui->pushButton_38->setText(".");
        ui->pushButton_39->setText(",");


        specSymbol--;
        ui->widget_9->setStyleSheet("border: 2px solid #d6d6d6;\n background-color:rgb(255, 255, 255);");

    }
}

void Keyboard::on_pushButton_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton->text());
}

void Keyboard::on_pushButton_2_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_2->text());
}

void Keyboard::on_pushButton_3_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_3->text());
}

void Keyboard::on_pushButton_4_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_4->text());
}

void Keyboard::on_pushButton_5_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_5->text());
}

void Keyboard::on_pushButton_7_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_7->text());
}

void Keyboard::on_pushButton_6_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_6->text());
}

void Keyboard::on_pushButton_8_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_8->text());
}

void Keyboard::on_pushButton_9_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_9->text());
}

void Keyboard::on_pushButton_10_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_10->text());
}

void Keyboard::on_pushButton_11_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_11->text());
}

void Keyboard::on_pushButton_12_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_12->text());
}

void Keyboard::on_pushButton_14_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_14->text());
}

void Keyboard::on_pushButton_15_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_15->text());
}

void Keyboard::on_pushButton_16_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_16->text());
}

void Keyboard::on_pushButton_17_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_17->text());
}

void Keyboard::on_pushButton_18_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_18->text());
}

void Keyboard::on_pushButton_19_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_19->text());
}

void Keyboard::on_pushButton_20_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_20->text());
}

void Keyboard::on_pushButton_21_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_21->text());
}

void Keyboard::on_pushButton_22_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_22->text());
}

void Keyboard::on_pushButton_23_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_23->text());
}

void Keyboard::on_pushButton_24_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_24->text());
}

void Keyboard::on_pushButton_25_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_25->text());
}

void Keyboard::on_pushButton_26_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_26->text());
}

void Keyboard::on_pushButton_27_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_27->text());
}

void Keyboard::on_pushButton_28_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_28->text());
}

void Keyboard::on_pushButton_29_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_29->text());
}

void Keyboard::on_pushButton_30_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_30->text());
}

void Keyboard::on_pushButton_31_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_31->text());
}

void Keyboard::on_pushButton_32_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_32->text());
}

void Keyboard::on_pushButton_33_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_33->text());
}

void Keyboard::on_pushButton_34_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_34->text());
}

void Keyboard::on_pushButton_35_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_35->text());
}

void Keyboard::on_pushButton_36_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_36->text());
}

void Keyboard::on_pushButton_37_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_37->text());
}

void Keyboard::on_pushButton_38_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_38->text());
}

void Keyboard::on_pushButton_39_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_39->text());
}

void Keyboard::on_pushButton_41_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_41->text());
}

void Keyboard::on_pushButton_42_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_42->text());
}

void Keyboard::on_pushButton_43_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_43->text());
}

void Keyboard::on_pushButton_44_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_44->text());
}

void Keyboard::on_pushButton_45_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_45->text());
}

void Keyboard::on_pushButton_46_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_46->text());
}

void Keyboard::on_pushButton_47_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_47->text());
}

void Keyboard::on_pushButton_48_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_48->text());
}

void Keyboard::on_pushButton_49_clicked()
{
    ui->editBox->setText(ui->editBox->text() + ui->pushButton_49->text());
}

void Keyboard::on_pushButton_52_clicked()
{
    ui->editBox->setText(ui->editBox->text() + " ");
}

void Keyboard::on_pushButton_13_clicked()
{
    QString str;
    str = ui->editBox->text();
    str.remove(str.length()-1, 1);
    ui->editBox->setText(str);
}

void Keyboard::on_pushButton_51_pressed()
{
    ui->widget_8->setStyleSheet("border: 2px solid #d6d6d6;\n background-color:rgb(194, 0, 0);");
    if(lang == 0){

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
    if(lang == 1){

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
    if(lang == 2){

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
}

void Keyboard::on_pushButton_51_released()
{
    ui->widget_8->setStyleSheet("border: 2px solid #d6d6d6;\n background-color:rgb(255, 255, 255);");
    if(lang == 0){

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
    if(lang == 1){

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
    if(lang == 2){

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
}



//Кнопка "Назад"
void Keyboard::on_pushButtonBack_clicked()
{
    close();
}
//



//Кнопка "Главная"
void Keyboard::on_pushButtonMain_clicked()
{
    close();
}
//

//Локализация
void Keyboard::SetLanguage()
{
    if (langOfUI == 0)      //UKR
    {
        ui->label->setText("Введіть дані авторизації:");
        ui->pushButtonNext->setText("ДАЛІ  >");
        ui->pushButtonMain->setText("ГОЛОВНА");
        ui->pushButtonBack->setText("<  НАЗАД");
    }

    if (langOfUI == 1)      //RUS
    {
        ui->label->setText("Введите данные авторизации:");
        ui->pushButtonNext->setText("ДАЛЕЕ  >");
        ui->pushButtonMain->setText("ГЛАВНАЯ");
        ui->pushButtonBack->setText("<  НАЗАД");
    }

    if (langOfUI == 2)      //ENG
    {
        ui->label->setText("Enter the authorization data:");
        ui->pushButtonNext->setText("NEXT  >");
        ui->pushButtonMain->setText("MAIN");
        ui->pushButtonBack->setText("<  BACK");
    }
}
//



//Установка картинки
void Keyboard::SetPicture ()
{
    ui->label_2->setPixmap(picture);
}
//

void Keyboard::on_pushButtonNext_clicked()
{
    Payment *wnd = new Payment (this, langOfUI, picture, ui->editBox->text());
    wnd->show();
}

void Keyboard::on_editBox_textChanged(const QString &arg1)
{
    if(arg1.length() > 0)
        ui->pushButtonNext->show();
    else
        ui->pushButtonNext->hide();
}
