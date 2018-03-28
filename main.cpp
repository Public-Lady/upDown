#include "updown/up_down.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UpDown w;
    w.show();

    return a.exec();
}
