cmake_minimum_required(VERSION 3.25)
project(Rubik-s-Cube)

set(CMAKE_CXX_STANDARD 20)

add_executable(Rubik-s-Cube main.cpp CallWindow.cpp CallWindow.h drawCubes.h)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(GLEW REQUIRED)
find_package(GLUT REQUIRED)
include_directories(${GLUT_INCLUDE_DIRS})
link_directories(${GLUT_LIBRARY_DIRS})
add_definitions(${GLUT_DEFINITIONS})

target_link_libraries(Rubik-s-Cube ${GLUT_LIBRARY})
include_directories(${OPENGL_INCLUDE_DIRS} ${GLFW_INCLUDE_DIRS} ${GLEW_INCLUDE_DIRS})
target_link_libraries(Rubik-s-Cube ${OPENGL_LIBRARIES} glfw GLEW glut)