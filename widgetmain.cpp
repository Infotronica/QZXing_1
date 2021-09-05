#include "widgetmain.h"
#include "ui_widgetmain.h"

int DecoderFormat_EAN_13;
int DecoderFormat_QR_CODE;

WidgetMain::WidgetMain(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WidgetMain)
{
    ui->setupUi(this);

    DecoderFormat_EAN_13= 1 << 8;
    DecoderFormat_QR_CODE = 1 << 12;
}

WidgetMain::~WidgetMain()
{
    delete ui;
}


void WidgetMain::on_pushButton_clicked()
{
    QPixmap qPixmap;
    QString filter,serialNumber;
    QString selectedPixmap;
    QZXing qZXing;

    filter = "PNG File (*.png)";
    selectedPixmap = QFileDialog::getOpenFileName(this,"Open a file", QDir::homePath(),filter);

    if (selectedPixmap.isEmpty())
    {
        return;
    }

    qPixmap.load(selectedPixmap);
    qPixmap=qPixmap.scaled(500,500,Qt::KeepAspectRatio);
    ui->labelPixmap->setPixmap(qPixmap);

    qZXing.setDecoder(DecoderFormat_QR_CODE | DecoderFormat_EAN_13);
    qZXing.setSourceFilterType(QZXing::SourceFilter_ImageNormal);
    qZXing.setTryHarderBehaviour(QZXing::TryHarderBehaviour_ThoroughScanning | QZXing::TryHarderBehaviour_Rotate);
    serialNumber = qZXing.decodeImage(qPixmap.toImage());
    ui->labelData->setText(serialNumber);
}
