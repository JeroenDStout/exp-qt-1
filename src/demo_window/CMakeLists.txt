init_directory(demo_window)

# Define the Version project
init_project(demo_window "demo_window")

# Sources
setup_project_source(demo_window "core"
  main.cpp
  window.cpp
  window.h
)
setup_project_source(demo_window "window"
  window.cpp
  window.h
)
setup_project_source_qt_ui(demo_window "window"
  window.ui
)

# Target
configure_project_executable(demo_window)
configure_project_console(demo_window)
configure_cxx_target(demo_window)
configure_qt_target(demo_window)
	
add_dependencies(demo_window version)