CMAKE_MINIMUM_REQUIRED(VERSION 3.26)

PROJECT(LeetCode VERSION 1.0.0 LANGUAGES CXX)

SET(CMAKE_CXX_STANDARD 23)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

SET(HEADER_FILES)

SET(SOURCE_FILES
		Algorithms/AddTwoNumbers/AddTwoNumbers.cpp
		Algorithms/PalindromeNumber/PalindromeNumber.cpp
		Algorithms/RomanToInteger/RomanToInteger.cpp
		Algorithms/TwoSum/TwoSum.cpp)

ADD_LIBRARY(${PROJECT_NAME} STATIC ${HEADER_FILES} ${SOURCE_FILES})