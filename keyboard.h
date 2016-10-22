#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <QDialog>

namespace Ui {
class Keyboard;
}

class Keyboard : public QDialog
{
    Q_OBJECT

public:
    explicit Keyboard(QWidget *parent = 0);
    ~Keyboard();
    int lang;
    int capslock;
private slots:
    void on_pushButton_53_clicked();

    void on_pushButton_54_clicked();

    void on_pushButton_55_clicked();

    void on_pushButton_40_clicked();

private:
    Ui::Keyboard *ui;

    void changeKeyLang();

    void Caps();
};

#endif // KEYBOARD_H
