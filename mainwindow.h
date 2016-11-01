#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <qdebug.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int langForKeyBoard;
    int capslock;
    int specSymbol;
    int shiftKey;

private slots:
    void on_pushButtonUKR_clicked();

    void on_pushButtonRUS_clicked();

    void on_pushButtonENG_clicked();

    void on_pushButtonKyivstarMob_clicked();

    void on_pushButtonKievstarInet_clicked();

    void on_pushButtonMobile_clicked();

    void on_pushButtonInternet_clicked();

    void on_pushButtonEMoney_clicked();

    void on_pushButtonGames_clicked();

    void on_pushButtonGKH_clicked();

    void on_pushButtonTaxi_clicked();

    void on_KeyBoardBut_40_clicked();

    void on_KeyBoardBut_50_clicked();

    void on_KeyBoardBut_53_clicked();

    void on_KeyBoardBut_54_clicked();

    void on_KeyBoardBut_55_clicked();

    void on_KeyBoardBut_51_pressed();

    void on_KeyBoardBut_51_released();

    //void on_LogoBut_clicked();

    void on_KeyBoardBut_1_clicked();

    void on_KeyBoardBut_2_clicked();

    void on_KeyBoardBut_3_clicked();

    void on_KeyBoardBut_4_clicked();

    void on_KeyBoardBut_5_clicked();

    void on_KeyBoardBut_6_clicked();

    void on_KeyBoardBut_7_clicked();

    void on_KeyBoardBut_8_clicked();

    void on_KeyBoardBut_9_clicked();

    void on_KeyBoardBut_10_clicked();

    void on_KeyBoardBut_11_clicked();

    void on_KeyBoardBut_12_clicked();

    void on_KeyBoardBut_14_clicked();

    void on_KeyBoardBut_15_clicked();

    void on_KeyBoardBut_16_clicked();

    void on_KeyBoardBut_17_clicked();

    void on_KeyBoardBut_18_clicked();

    void on_KeyBoardBut_19_clicked();

    void on_KeyBoardBut_20_clicked();

    void on_KeyBoardBut_21_clicked();

    void on_KeyBoardBut_22_clicked();

    void on_KeyBoardBut_23_clicked();

    void on_KeyBoardBut_24_clicked();

    void on_KeyBoardBut_25_clicked();

    void on_KeyBoardBut_26_clicked();

    void on_KeyBoardBut_27_clicked();

    void on_KeyBoardBut_28_clicked();

    void on_KeyBoardBut_29_clicked();

    void on_KeyBoardBut_30_clicked();

    void on_KeyBoardBut_31_clicked();

    void on_KeyBoardBut_32_clicked();

    void on_KeyBoardBut_33_clicked();

    void on_KeyBoardBut_34_clicked();

    void on_KeyBoardBut_35_clicked();

    void on_KeyBoardBut_36_clicked();

    void on_KeyBoardBut_37_clicked();

    void on_KeyBoardBut_38_clicked();

    void on_KeyBoardBut_39_clicked();

    void on_KeyBoardBut_41_clicked();

    void on_KeyBoardBut_42_clicked();

    void on_KeyBoardBut_43_clicked();

    void on_KeyBoardBut_44_clicked();

    void on_KeyBoardBut_45_clicked();

    void on_KeyBoardBut_46_clicked();

    void on_KeyBoardBut_47_clicked();

    void on_KeyBoardBut_48_clicked();

    void on_KeyBoardBut_49_clicked();

    void on_KeyBoardBut_52_clicked();

    void on_KeyBoardBut_13_clicked();

    void on_pushButtonVodafoneMob_clicked();

    void on_pushButtonMTSMob_clicked();

    void on_pushButtonLifecellMob_clicked();

    void on_pushButtonGoodLineMob_clicked();

    void on_pushButtonSimfortourMob_clicked();

    void on_pushButtonIntertelecomMob_clicked();

    void on_pushButtonPeoplenetMob_clicked();

    void on_pushButtonMaxnetMob_clicked();

    void on_pushButtonGlobalsimMob_clicked();

    void on_pushButtonTeletieMob_clicked();

    void on_pushButtonNewtoneMob_clicked();

    void on_pushButtonTravelsimMob_clicked();

    void on_pushButtonAltitelMob_clicked();

    void on_pushButtonAltowoip_clicked();

    void on_pushButtonInfo_clicked();

    void on_pushButtonMain_clicked();

    void on_pushButtonMainKeyBoard_clicked();

    void on_pushButtonNext_clicked();

private:
    Ui::MainWindow *ui;
    short lang = 0;     //0 -- UKR, 1 -- RUS, 2 -- ENG
    void changeKeyLang();
    void changeKeyBoardLang();
    void Caps();
    bool eventFilter(QObject *object, QEvent *event);
};

#endif // MAINWINDOW_H
