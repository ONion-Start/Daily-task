cmake_minimum_required(VERSION 3.30)
project(untitled1)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled1 main.cpp
        Sv.cpp
        Sv.h)
# Укажите путь к распакованной папке
add_subdirectory(googletest-main)

# Добавьте тестовый исполняемый файл
add_executable(runTests tests/test_main.cpp)

# Подключите Google Test к исполняемому файлу
target_link_libraries(runTests gtest gtest_main)
