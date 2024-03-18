#include <QCoreApplication>

#include <Bulb.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Bulb *newBulb = new Bulb();
    newBulb->onToggle();
    newBulb->onToggle();

    return a.exec();
}
