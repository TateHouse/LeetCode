# Valid Parentheses

## Problem

Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the string
is valid.

An input string is valid if:

1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.

## Examples

### Example 1

**Input:** `s = "()"`
**Output:** `true`

### Example 2

**Input:** `s = "()[]{}"`
**Output:** `true`

### Example 3

**Input:** `s = "(]"`
**Output:** `false`

## Constraints

- `1 <= s.length <= 10<sup>4</sup>`
- `s` consists of parentheses only `'()[]{}'`.

## [Solution](https://github.com/TateHouse/LeetCode/blob/master/Algorithms/ValidParentheses/ValidParentheses.cpp)

1. Check if the length of the given string is odd. If it is, return `false` because the string cannot be valid if it
   contains an odd number of characters because one of the parentheses would be guaranteed to not have a match.
2. Create an `std::unordered_map` to store the open and close parentheses. The close parentheses will be the keys and
   the open parentheses will be the values.
3. Create an `std::stack` to keep track of the open parentheses.
4. Iterate through the given string.
5. Within the loop:
    - Check if the current character is a close parenthesis.
        - If it is not, push it onto the stack and continue to the next iteration.
    - Get the top element of the stack.
        - If the stack is empty, set the top element to `' '`.
    - If the stack is not empty, pop the top element off of the stack.
    - Check if the current character is a close parenthesis and if the top element of the stack is the corresponding
      open parenthesis.
        - If it is, continue to the next iteration.
        - If it is not, return `false` because the string is not valid.
6. After the loop, return `true` if the stack is empty and `false` if it is not.

### Time Complexity

The time complexity of my solution is *O(n)* because the given string must be iterated through once.

### Space Complexity

The space complexity of my solution is *O(n)* because there could be up to *n* elements in the stack in the worst-case
scenario.

### Considerations and Alternatives

1. **Use Switch Instead of Hash Map**: Instead of using an `std::unordered_map` to store the open and close parentheses,
   a `switch` statement could be used to check if the current character is a close parenthesis and if the top element of
   the stack is the corresponding open parenthesis.