CMAKE_MINIMUM_REQUIRED(VERSION 3.26)

SET(SOURCE_FILES
		AddTwoNumbers.cpp
		FindLargestValueInEachTreeRow.cpp
		IntegerToRoman.cpp
		LongestCommonPrefix.cpp
		MaximumDepthOfBinaryTree.cpp
		PalindromeNumber.cpp
		RomanToInteger.cpp
		TwoSum.cpp
		ValidParentheses.cpp)

TARGET_SOURCES(${PROJECT_NAME} PRIVATE ${SOURCE_FILES})