cmake_minimum_required(VERSION 3.26)
project(deleteduplicates)
include(CTest)

set(CMAKE_CXX_STANDARD 23)

set(Boost_USE_STATIC_LIBS OFF)
find_package(Boost REQUIRED COMPONENTS unit_test_framework)
include_directories(${Boost_INCLUDE_DIRS} ../lib/include)

add_executable(boost_tests boosttest.cpp deleteduplicates.hpp)
target_link_libraries(boost_tests ${Boost_LIBRARIES})

add_executable(deleteduplicates testmain.cpp deleteduplicates.hpp)

add_test(NAME unit_tests COMMAND boost_tests)
