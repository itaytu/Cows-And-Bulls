cmake_minimum_required(VERSION 3.13)
project(Ex4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Ex4
        Demo.cpp
        DummyChoosers.cpp DummyChoosers.hpp
        DummyGuessers.cpp DummyGuessers.hpp
        play.cpp play.hpp
        Chooser.hpp
        Guesser.hpp
        SmartGuesser.cpp SmartGuesser.hpp
        calculate.cpp calculate.hpp
        CompileError1.cpp
        CompileError2.cpp
        Test.cpp
      )
