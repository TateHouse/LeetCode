CMAKE_MINIMUM_REQUIRED(VERSION 3.26)

SET(SOURCE_FILES
		AddTwoNumbers.cpp
		BinaryTreeLevelOrderTraversal.cpp
		BinaryTreeLevelOrderTraversal2.cpp
		CountPrimes.cpp
		EvaluateReversePolishNotation.cpp
		FindIndexOfFirstOccurrenceInString.cpp
		FindLargestValueInEachTreeRow.cpp
		IntegerToRoman.cpp
		JewelsAndStones.cpp
		KClosestPointsToOrigin.cpp
		LongestCommonPrefix.cpp
		LongestSubstringWithoutRepeatingCharacters.cpp
		MaximumDepthOfBinaryTree.cpp
		MergeTwoSortedLists.cpp
		PalindromeNumber.cpp
		RemoveDuplicatesFromSortedArray.cpp
		RemoveElement.cpp
		RomanToInteger.cpp
		SearchInsertPosition.cpp
		SquareRoot.cpp
		TrappingRainWater.cpp
		TwoSum.cpp
		ValidAnagram.cpp
		ValidParentheses.cpp)

TARGET_SOURCES(${PROJECT_NAME} PRIVATE ${SOURCE_FILES})