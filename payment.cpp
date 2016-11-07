#include "payment.h"
#include "ui_payment.h"

Payment::Payment(QWidget *parent, short language, QPixmap pic, QString UserData) :
    QDialog(parent),
    ui(new Ui::Payment)
{
    ui->setupUi(this);
    lang = language;
    picture = pic;
    UserDataPrinyatye = UserData;
    SetPicture();
    SetLanguage();
    ui->LabelUserData->setText(UserDataPrinyatye);
    par = parent;
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    // задаем ширину столбцов
    //ui->tableWidget->horizontalHeader()->resizeSection(0, 105);
    //ui->tableWidget->horizontalHeader()->resizeSection(0, 105);
    // фиксируем их размер
    //ui->tableWidget->horizontalHeader()->set (0, QHeaderView::Fixed);
    //ui->tableWidget->horizontalHeader()->setResizeMode(2, QHeaderView::Fixed);
    ui->widget_8->hide();
    ui->widget_9->hide();

}

Payment::~Payment()
{
    delete ui;
}
//Локализация
void Payment::SetLanguage()
{
    if (lang == 0)      //UKR
    {
        ui->label_5->setText("Ваші дані:");
        ui->pushButtonNext->setText("ДАЛІ  >");
        ui->pushButtonMain->setText("ГОЛОВНА");
        ui->pushButtonBack->setText("<  НАЗАД");
        ui->label_3->setText("АВТОМАТ РЕШТИ НЕ ВИДАЄ!");
        ui->label_6->setText("Внесено:");
        ui->label_7->setText("Комісія:");
        ui->label_8->setText("Зараховано:");
        ui->label->setText("Друкувати чек?");
        ui->pushButton->setText("Ні");
        ui->pushButton_2->setText("Так");

        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 5; j++){
                ui->tableWidget->setItem(j, i, new QTableWidgetItem);
            }
        }

        ui->tableWidget->horizontalHeaderItem(0)->setText("Сума платежу");
        ui->tableWidget->horizontalHeaderItem(1)->setText("Рoзмір комисії");

        ui->tableWidget->item(0,0)->setText("до 2 грн");
        ui->tableWidget->item(0,1)->setText("0.99 грн");
        ui->tableWidget->item(1,0)->setText("2 - 4 грн");
        ui->tableWidget->item(1,1)->setText("1,99 грн");
        ui->tableWidget->item(2,0)->setText("4 - 51 грн");
        ui->tableWidget->item(2,1)->setText("3.25 грн");
        ui->tableWidget->item(3,0)->setText("51 - 100 грн");
        ui->tableWidget->item(3,1)->setText("6.5%");
        ui->tableWidget->item(4,0)->setText("более 100 грн");
        ui->tableWidget->item(4,1)->setText("5.5%");
    }

    if (lang == 1)      //RUS
    {
        ui->label_5->setText("Ваши данные:");
        ui->pushButtonNext->setText("ДАЛЕЕ  >");
        ui->pushButtonMain->setText("ГЛАВНАЯ");
        ui->pushButtonBack->setText("<  НАЗАД");
        ui->label_3->setText("АВТОМАТ СДАЧИ НЕ ВЫДАЕТ!");
        ui->label_6->setText("Внесено:");
        ui->label_7->setText("Комиссия:");
        ui->label_8->setText("Зачисленно:");
        ui->label->setText("Печатать чек?");
        ui->pushButton->setText("Нет");
        ui->pushButton_2->setText("Да");

        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 5; j++){
                ui->tableWidget->setItem(j, i, new QTableWidgetItem);
            }
        }

        ui->tableWidget->horizontalHeaderItem(0)->setText("Сумма платежа");
        ui->tableWidget->horizontalHeaderItem(1)->setText("Размер комиссии");

        ui->tableWidget->item(0,0)->setText("до 2 грн");
        ui->tableWidget->item(0,1)->setText("0.99 грн");
        ui->tableWidget->item(1,0)->setText("2 - 4 грн");
        ui->tableWidget->item(1,1)->setText("1,99 грн");
        ui->tableWidget->item(2,0)->setText("4 - 51 грн");
        ui->tableWidget->item(2,1)->setText("3.25 грн");
        ui->tableWidget->item(3,0)->setText("51 - 100 грн");
        ui->tableWidget->item(3,1)->setText("6.5%");
        ui->tableWidget->item(4,0)->setText("более 100 грн");
        ui->tableWidget->item(4,1)->setText("5.5%");
    }

    if (lang == 2)      //ENG
    {
        ui->label_5->setText("Your data:");
        ui->pushButtonNext->setText("NEXT  >");
        ui->pushButtonMain->setText("MAIN");
        ui->pushButtonBack->setText("<  BACK");
        ui->label_3->setText("REMAINDER ISN`T ISSUED!");
        ui->label_6->setText("Contribute:");
        ui->label_7->setText("Comission:");
        ui->label_8->setText("Enrolle:");
        ui->label->setText("Do you need a check?");
        ui->pushButton->setText("No");
        ui->pushButton_2->setText("Yes");

        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 5; j++){
                ui->tableWidget->setItem(j, i, new QTableWidgetItem);
            }
        }

        ui->tableWidget->horizontalHeaderItem(0)->setText("Payment");
        ui->tableWidget->horizontalHeaderItem(1)->setText("Comission");

        ui->tableWidget->item(0,0)->setText("less 2 uah");
        ui->tableWidget->item(0,1)->setText("0.99 uah");
        ui->tableWidget->item(1,0)->setText("2 - 4 uah");
        ui->tableWidget->item(1,1)->setText("1,99 uah");
        ui->tableWidget->item(2,0)->setText("4 - 51 uah");
        ui->tableWidget->item(2,1)->setText("3.25 uah");
        ui->tableWidget->item(3,0)->setText("51 - 100 uah");
        ui->tableWidget->item(3,1)->setText("6.5%");
        ui->tableWidget->item(4,0)->setText("more 100 uah");
        ui->tableWidget->item(4,1)->setText("5.5%");
    }
}
//



//Установка картинки
void Payment::SetPicture ()
{
    ui->label_4->setPixmap(picture);
}
//

void Payment::on_pushButtonBack_clicked()
{
    close();
}

void Payment::on_pushButtonMain_clicked()
{
    close();
    par->close();

}

void Payment::on_pushButtonNext_clicked()
{
    ui->widget_8->show();
    ui->widget_9->show();
}

void Payment::on_pushButton_clicked()
{
    on_pushButtonMain_clicked();
}

void Payment::on_pushButton_2_clicked()
{
    on_pushButtonMain_clicked();
}
