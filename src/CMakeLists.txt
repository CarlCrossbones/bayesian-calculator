cmake_minimum_required(VERSION 3.16)
project(BayesianCalculator LANGUAGES CXX)

add_executable(calculator
    main.cpp
    lib/ApplicationManager.cpp
    lib/BayesianCalculator.cpp
)

target_include_directories(calculator PRIVATE include)
target_compile_features(calculator PRIVATE cxx_std_14)