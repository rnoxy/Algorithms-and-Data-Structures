
cmake_minimum_required (VERSION 2.6)

project (AlgorithmsAndDataStructures)

include_directories(include/math)
add_library (math src/math/Euclidean.cpp)

################################
# GTest
################################
ADD_SUBDIRECTORY (external/googletest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

################################
# Unit Tests
################################
# Add test cpp file
add_executable( runUnitTests test/math/test_Euclidean.cpp )

# Link test executable against gtest & gtest_main
target_link_libraries(runUnitTests math gtest gtest_main)
add_test( runUnitTests runUnitTests )
