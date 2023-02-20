init_directory(timetron)

# Define the Version project
init_project(timetron "timetron")

# Sources static
setup_project_source(timetron "core"
  main.cpp
)

# Target
configure_project_executable(timetron)
configure_cxx_target(timetron)

add_dependencies(timetron version)