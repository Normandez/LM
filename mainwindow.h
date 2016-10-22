#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_52_clicked();

    void on_pbFind_clicked();

    void on_pushButton_105_clicked();

    void on_pushButtonUKR_clicked();

    void on_pushButtonRUS_clicked();

    void on_pushButtonENG_clicked();

    void on_pushButtonKyivstarMob_clicked();

    void on_pushButtonKievstarInet_clicked();

    void on_pushButtonFind_clicked();

private:
    Ui::MainWindow *ui;
    short lang = 0;     //0 -- UKR, 1 -- RUS, 2 -- ENG
    void changeKeyLang();
};

#endif // MAINWINDOW_H
