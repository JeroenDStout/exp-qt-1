#pragma once

#include "demo_window/ui_window.h"
#include "demo_window/ui_version.h"

#include <QtWidgets/QMainWindow>


namespace gaos::qt_demo {

    // Empty window
    class demo_window : public QMainWindow
    {
        Q_OBJECT

      public:
        demo_window();
        
      public slots:
        void uii_about();

      private:
        Ui::demo_window ui_window;
        Ui::version     ui_version;
    };

}