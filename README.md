# Summary

This is a very basic tutorial for learning gmock. I simply followed https://github.com/google/googletest/blob/master/googlemock/docs/ForDummies.md on a Mac OS X system.

## Running the tests

g++ -std=c++11 -I../src/ -I../gtest/include test_game_engine.cc -o test_game_engine ../gtest/libgmock_main.dylib ../gtest/libgtest_main.dylib ../gtest/libgtest.dylib ../gtest/libgmock.dylib && ./test_game_engine

## GTest compilation

I have used CMake for Mac OS X (https://cmake.org/files/v3.5/cmake-3.5.0-Darwin-x86_64.dmg). It works without any issues.