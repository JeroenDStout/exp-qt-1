#include "demo_window/window.h"

#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gaos::qt_demo::demo_window w;
    w.show();
    return a.exec();
}
