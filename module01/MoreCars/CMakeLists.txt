cmake_minimum_required(VERSION 3.14)

project(MoreCars LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(MoreCars
  main.cpp
  car.h car.cpp
  sportscar.h sportscar.cpp
  bus.h bus.cpp
  truck.h truck.cpp
  bustruck.h bustruck.cpp
)
target_link_libraries(MoreCars Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS MoreCars
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
