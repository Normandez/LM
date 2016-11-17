#ifndef ADDPAPER_H
#define ADDPAPER_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class AddPaper;
}

class AddPaper : public QDialog
{
    Q_OBJECT

public:
    explicit AddPaper(QWidget *parent = 0);
    ~AddPaper();

public slots:
    void on_pushButtonCancel_clicked();

    void on_pushButtonOK_clicked();

    void TimerProcessingTimeOut();

    void TimerSuccessTimeOut();

private:
    Ui::AddPaper *ui;
};

#endif // ADDPAPER_H
