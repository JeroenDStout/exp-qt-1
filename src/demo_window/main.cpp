#include "demo_window/window.h"
#include "version/git_version.h"

#include <QtWidgets/QApplication>

#include <iostream>


int main(int argc, char *argv[])
{
    std::cout
      << std::endl
      << "          * * * * * * * * * * * * * " << std::endl
      << "         * * * Qt Experiment I * * * " << std::endl
      << "          * * * * * * * * * * * * * " << std::endl
      << std::endl
      << gaos::version::get_git_essential_version() << std::endl
      << gaos::version::get_compile_stamp() << std::endl
      << std::endl
      << gaos::version::get_git_history() << std::endl
      << std::endl;

    QApplication a(argc, argv);
    gaos::qt_demo::demo_window w;
    w.show();
    return a.exec();
}
