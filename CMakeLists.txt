cmake_minimum_required(VERSION 3.16)

project(form VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets LinguistTools)
qt_standard_project_setup(I18N_TRANSLATED_LANGUAGES fr)

qt_add_executable(form
    main.cpp
    form.cpp
)

qt_add_translations(form)

target_link_libraries(form PRIVATE Qt6::Widgets)

set_target_properties(form PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE OFF
)
