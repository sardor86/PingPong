﻿# CMakeList.txt: проект CMake для PingPong; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (PingPong "PingPong.cpp" "PingPong.h" "Window/Window.h" "Window/Window.cpp" "Shape/Shape.h" "Shape/Shape.cpp" "Vector/Vector.h" "Vector/Vector.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET PingPong PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
