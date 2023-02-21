#include "demo_window/window.h"


#include <iostream>


using namespace gaos::qt_demo;


demo_window::demo_window()
{
    ui_window.setupUi(this);
}


void demo_window::uii_about()
{
    QDialog *about = new QDialog();
    ui_version.setupUi(about);
    about->setWindowModality(Qt::WindowModality::ApplicationModal);
    about->show();
}