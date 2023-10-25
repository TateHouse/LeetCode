# Integer to Roman

## Problem

Roman numerals are represented by seven different symbols: `I`, `V`, `X`, `L`, `C`, `D`, and `M`.

| Symbol | Value |
|:------:|:-----:|
|  `I`   |   1   |
|  `V`   |   5   |
|  `X`   |  10   |
|  `L`   |  50   |
|  `C`   |  100  |
|  `D`   |  500  |
|  `M`   | 1000  |

For example, `2` is written as `II` in Roman numeral, just two one's added together. `12` is written as `XII`, which is
simply `X` + `II`. The number `27` is written as `XXVII`, which is `XX` + `V` + `II`.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not `IIII`.
Instead, the number four is written as `IV`. Because the one is before the five we subtract it making four. The same
principle applies to the number nine, which is written as `IX`. There are six instances where subtraction is used:

- `I` can be placed before `V` (5) and `X` (10) to make 4 and 9.
- `X` can be placed before `L` (50) and `C` (100) to make 40 and 90.
- `C` can be placed before `D` (500) and `M` (1000) to make 400 and 900.

Given an integer, convert it to a roman numeral.

## Examples

### Example 1

**Input:** num = 3
**Output:** "III"
**Explanation:** 3 is represented as "III" in Roman numerals.

### Example 2

**Input:** num = 4
**Output:** "IV"
**Explanation:** 4 is represented as "IV" in Roman numerals.

### Example 3

**Input:** num = 1994
**Output:** "MCMXCIV"
**Explanation:** M = 1000, CM = 900, XC = 90 and IV = 4.

## Constraints

- 1 <= num <= 3999

## [Solution](https://github.com/TateHouse/LeetCode/blob/master/Algorithms/IntegerToRoman/IntegerToRoman.cpp)

1. Initialize a collection of roman numerals and their corresponding values.
2. Initialize a string to store the roman numeral representation of the input integer.
3. Iterate through the collection of roman numerals starting with the largest value.
4. Each iteration:
    - While the current roman numeral value is less than or equal to the input integer:
        - Append the current roman numeral to the roman numeral string.
        - Subtract the current roman numeral value from the input integer.
5. Return the roman numeral string.

### Time Complexity

The time complexity of my solution is *O(1)* because the input integer is guaranteed to be between 1 and 3999.
Therefore, the number of operations is capped and does not grow indeterminately with the size of the input. If there
were no constraints on the input, specifically the upper bound, the time complexity would be *O(n)*.

### Space Complexity

The space complexity of my solution is *O(1)* because a constant amount of extra space is used.

### Considerations and Alternatives

1. **Recursive or Iterative Approach**: A recursive or iterative approach could be used to solve this problem. These
   versions involve finding the largest numeral for each subtraction. They might not be as efficient as the greedy
   approach
   used in my solution, but they are valid alternatives.
2. **Data Structures**: Other data structures could be used to store the roman numerals and their values. For example,
   a `std::map` could be used to store the roman numerals and their values. However, an `std::unordered` map would not
   be a great choice since the order in which they are stored in the data structure is relevant to my solution.