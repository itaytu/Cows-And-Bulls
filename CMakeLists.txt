cmake_minimum_required(VERSION 3.13)
project(Ex4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Ex4
    Demo.cpp
    DummyChoosers.cpp
    DummyGuessers.cpp
    play.cpp Chooser.cpp Guesser.cpp SmartGuesser.cpp calculate.cpp)
