#include "widgetmain.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WidgetMain w;
    w.show();
    return a.exec();
}

/*
    //QImage imageToDecode("/home/iosef/prj/proyectos_2021/st-widget-proj/img/QRCode-target.png");
    QImage imageToDecode("/home/iosef/prj/proyectos_2021/st-widget-proj/img/qr_1.png");
    QZXing qZXing;
    //mandatory settings

    // im not going to use your lastest project version, im going to use my lastest working verion

    int DecoderFormat_EAN_13= 1 << 8;
    int DecoderFormat_QR_CODE = 1 << 12;

    qZXing.setDecoder(DecoderFormat_QR_CODE | DecoderFormat_EAN_13);

    //optional settings
    //qZXing.setSourceFilterType(QZXing::SourceFilter_ImageNormal | QZXing::SourceFilter_ImageInverted);
    qZXing.setSourceFilterType(QZXing::SourceFilter_ImageNormal);
    qZXing.setTryHarderBehaviour(QZXing::TryHarderBehaviour_ThoroughScanning | QZXing::TryHarderBehaviour_Rotate);

    //trigger decode
    QString result = qZXing.decodeImage(imageToDecode);
    ui->labelData->setText(result);
*/
