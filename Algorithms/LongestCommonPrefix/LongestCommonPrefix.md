# Longest Common Prefix

## Problem

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

## Examples

### Example 1

**Input:** strs = ["flower","flow","flight"]  
**Output:** "fl"

### Example 2

**Input:** strs = ["dog","racecar","car"]  
**Output:** ""  
**Explanation:** There is no common prefix among the input strings.

## Constraints

- 1 <= strs.length <= 200
- 0 <= strs[i].length <= 200
- strs[i] consists of only lowercase English letters.

## [Solution](https://github.com/TateHouse/LeetCode/blob/master/Algorithms/LongestCommonPrefix/LongestCommonPrefix.cpp)

1. If the input `std::vector` of strings is empty, return an empty string.
2. Initialize a string to store the longest common prefix and set it equal to the first string in the
   input `std::vector`.
3. Iterate through the input `std::vector` of strings starting at the second string.
4. Each iteration:
    - Iterate through the current string character by character to compare it with the current prefix.
        - If they match, continue.
        - If they don't match, or we reach the end of one string, trim the current prefix accordingly.
    - If at any point the prefix becomes an empty string, return an empty string as the longest common prefix cannot
      exist.
5. Return the longest common prefix.

### Time Complexity

The time complexity of my solution is *O(s)* where *s* is the sum of all characters in all strings in the input.

### Space Complexity

The space complexity of my solution is *O(1)* because a constant amount of extra space is used to store the longest
common prefix. The variables `prefix`, `stringIndex`, and `charIndex` do not count towards space complexity because they
are not dependent on the size of the input.

### Considerations and Alternatives

1. **Parallel Processing**: If the collection of strings is extremely large, parallelizing the string comparison process
   could improve performance.
2. **Binary Search**: For a more complicated but possibly faster solution, a binary search method could be used to find
   the common prefix. This involves taking substrings and checking them across all strings, which might be faster for
   certain kinds of inputs.