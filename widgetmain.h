#ifndef WIDGETMAIN_H
#define WIDGETMAIN_H

#include <QWidget>
#include <QFileDialog>
#include <QZXing.h>

QT_BEGIN_NAMESPACE
namespace Ui { class WidgetMain; }
QT_END_NAMESPACE

class WidgetMain : public QWidget
{
    Q_OBJECT

public:
    WidgetMain(QWidget *parent = nullptr);
    ~WidgetMain();

private slots:
    void on_pushButton_clicked();

private:
    Ui::WidgetMain *ui;
};
extern int DecoderFormat_EAN_13;
extern int  DecoderFormat_QR_CODE;
#endif // WIDGETMAIN_H
