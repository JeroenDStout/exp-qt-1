#pragma once

#include "demo_window/ui_window.h"

#include <QtWidgets/QMainWindow>


namespace gaos::qt_demo {

    // Empty window
    class demo_window : public QMainWindow
    {
        Q_OBJECT

      public:
        demo_window();

      private:
        Ui::demo_window ui;
    };

}