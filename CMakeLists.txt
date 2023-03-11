cmake_minimum_required(VERSION 3.1.0)

project(helloworld VERSION 1.0.0 LANGUAGES CXX)

set (CMAKE_PREFIX_PATH "C:/develop/repo/qt/5.15.2/msvc2019_64")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(HEADERS
	mainwindow.h
)

set(SOURCES
	main.cpp
	mainwindow.cpp
)

find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)

add_executable(helloworld
	${HEADERS}
	${SOURCES}
	application.qrc
)


target_link_libraries(helloworld Qt5::Core Qt5::Gui Qt5::Widgets)