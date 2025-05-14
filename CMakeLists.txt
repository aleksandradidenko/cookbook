cmake_minimum_required(VERSION 3.5)

set(APP_NAME CookBook)
set(APP_DESC "Кулинарные рецепты")
set(TARGET_NAME cookbook)

project(${TARGET_NAME} VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(wxWidgets REQUIRED COMPONENTS net core base)

if(wxWidgets_USE_FILE) # not defined in CONFIG mode
    include(${wxWidgets_USE_FILE})
endif()

set(PROJECT_SOURCES
        include/cookbook.h
        src/cookbook.cpp
        src/main.cpp
        version
)

add_executable(${TARGET_NAME}
    ${PROJECT_SOURCES}
)

target_link_libraries(${TARGET_NAME} ${wxWidgets_LIBRARIES})


set(INCLUDES
    ${PROJECT_SOURCE_DIR}/include/
    ${PROJECT_SOURCE_DIR}/include//classes
    ${CMAKE_INCLUDE_PATH}
)

target_include_directories(${TARGET_NAME} PUBLIC "${INCLUDES}") # include headers


