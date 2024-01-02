CMAKE_MINIMUM_REQUIRED(VERSION 3.26)

SET(SOURCE_FILES
		AddTwoNumbers.cpp
		BinaryTreeLevelOrderTraversal.cpp
		BinaryTreeLevelOrderTraversal2.cpp
		FindLargestValueInEachTreeRow.cpp
		IntegerToRoman.cpp
		JewelsAndStones.cpp
		LongestCommonPrefix.cpp
		MaximumDepthOfBinaryTree.cpp
		PalindromeNumber.cpp
		RomanToInteger.cpp
		SearchInsertPosition.cpp
		TwoSum.cpp
		ValidParentheses.cpp)

TARGET_SOURCES(${PROJECT_NAME} PRIVATE ${SOURCE_FILES})