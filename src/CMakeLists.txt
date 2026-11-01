cmake_minimum_required(VERSION 3.16)
project(BayesianCalculator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_library(bayesian_calculator_lib
    lib/BayesianCalculator.cpp
    lib/ApplicationManager.cpp
)

target_include_directories(bayesian_calculator_lib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(calculator
    main.cpp
)
target_link_libraries(calculator PRIVATE bayesian_calculator_lib)

enable_testing()

add_executable(bayesian_calculator_tests
    unit_tests/BayesianCalculatorTests.cpp
    unit_tests/ApplicationMangagerTests.cpp
)
target_link_libraries(bayesian_calculator_tests
    PRIVATE
        bayesian_calculator_lib
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(bayesian_calculator_tests)