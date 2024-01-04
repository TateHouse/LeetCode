CMAKE_MINIMUM_REQUIRED(VERSION 3.26)

SET(SOURCE_FILES
		AddTwoNumbers.cpp
		BinaryTreeLevelOrderTraversal.cpp
		BinaryTreeLevelOrderTraversal2.cpp
		FindIndexOfFirstOccurrenceInString.cpp
		FindLargestValueInEachTreeRow.cpp
		IntegerToRoman.cpp
		JewelsAndStones.cpp
		LongestCommonPrefix.cpp
		MaximumDepthOfBinaryTree.cpp
		MergeTwoSortedLists.cpp
		PalindromeNumber.cpp
		RemoveDuplicatesFromSortedArray.cpp
		RemoveElement.cpp
		RomanToInteger.cpp
		SearchInsertPosition.cpp
		TwoSum.cpp
		ValidAnagram.cpp
		ValidParentheses.cpp)

TARGET_SOURCES(${PROJECT_NAME} PRIVATE ${SOURCE_FILES})