cmake_minimum_required(VERSION 3.1.0)

project(raytracer VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HEADERS
	lodepng.h
)

set(SOURCES
	main.cpp
	lodepng.cpp
)

add_executable(raytracer
	${HEADERS}
	${SOURCES}
)
