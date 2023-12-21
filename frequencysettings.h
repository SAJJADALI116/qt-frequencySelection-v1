#ifndef FREQUENCYSETTINGS_H
#define FREQUENCYSETTINGS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class FrequencySettings;
}
QT_END_NAMESPACE

class FrequencySettings : public QMainWindow
{
    Q_OBJECT

public:
    FrequencySettings(QWidget *parent = nullptr);
    ~FrequencySettings();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::FrequencySettings *ui;
};
#endif // FREQUENCYSETTINGS_H
