cmake_minimum_required(VERSION 3.0)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) 

project(Main)

add_executable(Main main.cpp)

target_sources(Main PRIVATE main.cpp Balok.cpp Kubus.cpp Silinder.cpp BangunRuang.cpp)

set(CONDA_BUILD_SYSROOT "$ENV{CONDA_PREFIX}/$ENV{HOST}/sysroot")

