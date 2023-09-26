# Palindrome Number

## Problem

Given an integer `x`, return `true` if `x` is palindrome integer.

## Examples

### Example 1

**Input:** x = 121
**Output:** true
**Explanation:** 121 reads as 121 from left to right and from right to left.

### Example 2

**Input:** x = -121
**Output:** false
**Explanation:** From left to right, it reads -121. From right to left, it becomes 121-. Therefore, it is not a
palindrome.

### Example 3

**Input:** x = 10
**Output:** false
**Explanation:** Reads 01 from right to left. Therefore, it is not a palindrome.

## Constraints

- -2<sup>31</sup> <= x <= 2<sup>31</sup> - 1

## [Solution](https://github.com/TateHouse/LeetCode/blob/master/Algorithms/PalindromeNumber/PalindromeNumber.cpp)

1. If the given integer is negative, return `false`.
2. Create two integers, one to store the given integerand one to store the reverse of the given integer.
3. While the given integer is greater than 0:

- Calculate the last digit of the given integer by using the modular operator with 10.
- Check for potential integer overflow and return `false` if it would occur.
- Update the reversed integer by multiplying it by 10 and adding the last digit of the given integer.
- Update the given integer by dividing it by 10.
- Once out of the loop, return `true` if the given integer is equal to the reversed integer and `false` otherwise.

### Time Complexity

The time complexity of my solution is *O(log<sub>10</sub>(x))* because the number of digits in the given integer is
equal to *log<sub>10</sub>(x)*.

### Space Complexity

The space complexity of this solution is *O(1)* because a constant amount of extra space is used to store the integers.

### Considerations and Alternatives

1. **String Conversion**: Convert the given integer to a string and check if the string is a palindrome.