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

    void on_pushButtonSipNet_clicked();

    void on_pushButton1GBHost_clicked();

    void on_pushButtonBatyevkaNet_clicked();

    void on_pushButtonDiaNet_clicked();

    void on_pushButtonDikiySadISP_clicked();

    void on_pushButtonFormatNet_clicked();

    void on_pushButtonFreeHostUA_clicked();

    void on_pushButtonGTSNet_clicked();

    void on_pushButtonGreenNet_clicked();

    void on_pushButtonInfomirNet_clicked();

    void on_pushButtonKichkasNet_clicked();

    void on_pushButtonMegaStyleISP_clicked();

    void on_pushButtonNicUANet_clicked();

    void on_pushButtonTeNet_clicked();

    void on_LogoBut_clicked();

    void on_pushButtonBitcoin_clicked();

    void on_pushButtonGlobalMoney_clicked();

    void on_pushButtonSkype_clicked();

    void on_pushButtonWallatOne_clicked();

    void on_pushButtonWebMoney_clicked();

    void on_pushButtonYandexMoney_clicked();

    void on_pushButtonDarniza1_clicked();

    void on_pushButtonDobrobut_clicked();

    void on_pushButtonDomKom_clicked();

    void on_pushButtonEverest_clicked();

    void on_pushButtonGIOZ_clicked();

    void on_pushButtonHerz_clicked();

    void on_pushButtonKievEnergo_clicked();

    void on_pushButtonKievGaz_clicked();

    void on_pushButtonOdessOblEnergo_clicked();

    void on_pushButtonUkrPays_clicked();

    void on_pushButtonVodokanalKharkov_clicked();

    void on_pushButtonVodokanalZP_clicked();

    void on_pushButtonZaporozhGaz_clicked();

    void on_pushButton101XP_clicked();

    void on_pushButton11x11Football_clicked();

    void on_pushButtonAllods_clicked();

    void on_pushButtonArcheAge_clicked();

    void on_pushButtonCarnage_clicked();

    void on_pushButtonGalactika_clicked();

    void on_pushButtonMyLands_clicked();

    void on_pushButtonRazrushiteli_clicked();

    void on_pushButtonStallkerOnline_clicked();

    void on_pushButtonSteam_clicked();

    void on_pushButtonTankiOnline_clicked();

    void on_pushButtonVK_clicked();

    void on_pushButtonWarFace_clicked();

    void on_pushButtonWargaming_clicked();

    void on_pushButtonTaxi979Kiev_clicked();

    void on_pushButtonTaxiKolobok_clicked();

    void on_pushButtonTaxiNavigator_clicked();

    void on_pushButtonTaxiPatriot_clicked();

    void on_pushButtonTaxiRed_clicked();

    void on_pushButtonTaxiSvoeTaxi_clicked();

    void on_pushButtonTaxiVirazh_clicked();

    void on_pushButtonBack1_clicked();

    void on_pushButtonBack2_clicked();

    void on_pushButtonBack3_clicked();

    void on_pushButtonKievstarInet_Find_clicked();

    void on_pushButtonKyivstarMob_Find_clicked();

    void on_pushButtonSteam_Find_clicked();

    void on_pushButtonWebMoney_Find_clicked();

    void on_pushButtonBack4_clicked();

private:
    Ui::MainWindow *ui;
    short lang = 0;     //0 -- UKR, 1 -- RUS, 2 -- ENG
    void changeKeyLang();
    void changeKeyBoardLang();
    void Caps();
    bool eventFilter(QObject *object, QEvent *event);
};

#endif // MAINWINDOW_H
