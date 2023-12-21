#include "frequencysettings.h"
#include "./ui_frequencysettings.h"
#include <QMessageBox>

int frequency = 175;
FrequencySettings::FrequencySettings(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FrequencySettings)
{
    ui->setupUi(this);
    ui->lcdNumber->display(frequency);
}

FrequencySettings::~FrequencySettings()
{
    delete ui;
}

void FrequencySettings::on_pushButton_clicked()
{
    if (frequency==225)
    {
        frequency = 175;
    }
    frequency++;
    ui->lcdNumber->display(frequency);
}


void FrequencySettings::on_pushButton_2_clicked()
{
    frequency = ui->lineEdit->text().toInt();
    if (frequency > 174 & frequency < 226)
    {
        ui->lcdNumber->display(frequency);
    }
    else
    {
        QMessageBox::warning(this,"Invalid Inputs","Choose Between 175-225 MHz");
    }
}

