# Roman to Integer

## Problem

Roman numerals are represented by seven different symbols: `I`, `V`, `X`, `L`, `C`, `D` and `M`.

| Symbol | Value |
|:------:|:-----:|
|  `I`   |   1   |
|  `V`   |   5   |
|  `X`   |  10   |
|  `L`   |  50   |
|  `C`   |  100  |
|  `D`   |  500  |
|  `M`   | 1000  |

For example, `2` is written as `II` in Roman numeral, just two ones added together. `12` is written as `XII`, which is
simply `X` + `II`. The number `27` is written as `XXVII`, which is `XX` + `V` + `II`.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not `IIII`.
Instead, the number four is written as `IV`. Because the one is before the five we subtract it making four. The same
principle applies to the number nine, which is written as `IX`. There are six instances where subtraction is used:

- `I` can be placed before `V` (5) and `X` (10) to make 4 and 9.
- `X` can be placed before `L` (50) and `C` (100) to make 40 and 90.
- `C` can be placed before `D` (500) and `M` (1000) to make 400 and 900.

Given a roman numeral, convert it to an integer.

### Examples

#### Example 1

**Input:** `s = "III"`
**Output:** `3`
**Explanation:** `III` = `3`.

#### Example 2

**Input:** `s = "LVIII"`
**Output:** `58`
**Explanation:** `L = 50`, `V = 5`, `III = 3`.

#### Example 3

**Input:** `s = "MCMXCIV"`
**Output:** `1994`
**Explanation:** `M = 1000`, `CM = 900`, `XC = 90` and `IV = 4`.

### Constraints

- `1 <= s.length <= 15`
- `s` contains only the characters `('I', 'V', 'X', 'L', 'C', 'D', 'M')`.
- It is **guaranteed** that `s` is a valid roman numeral in the range `[1, 3999]`.

## [Solution](https://github.com/TateHouse/LeetCode/blob/master/Algorithms/RomanToInteger/RomanToInteger.cpp)

1. Create variables for the result and the previous value.
2. Iterate through the given string of roman numerals.
3. Within the loop:
    - Convert the current roman numeral to its integer value and store it in a variable.
    - Calculate the result by:
        - Adding the current value to the result.
        - Subtracting two times the previous value from the result if the current value is greater than the previous
          value.
    - Set the previous value to the current value.
4. Return the result.

### Time Complexity

The time complexity of my solution is *O(n)* because the entire string needs to be iterated through once.

### Space Complexity

The space complexity of my solution is *O(1)*, not including the space needed to store the given string, because a fixed
number of variables are used that do not depend on the input size.

### Considerations and Alternatives

- After testing both ways, removing the if statement and using a ternary operator to combine both arithmetic operations
  into one step resulted in a faster runtime due to compiler optimizations.

1. **Using a Hash Map**: I could have used a `std::unordered_map` to store the integer values of each Roman numeral.
   However, after testing, I found that this solution was substantially slower than my solution that uses a switch
   statement.
2. **Two-Pass Algorithm**: in the first pass, you can convert all Roman numerals to their integer counterparts and store
   them in an array. In the second pass, you can iterate through the array and calculate the result using similar logic
   to my solution.
3. **Lookahead Instead of Lookbehind**: Instead of keeping track of the previous Roman numeral, you could look ahead to
   the next one to determine whether you should subtract twice the current value.