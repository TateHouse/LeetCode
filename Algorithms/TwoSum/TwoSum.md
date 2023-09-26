# Two Sum

## Problem

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to
target.

You may assume that each input would have **exactly one solution**, and you may not use the same element twice.

You can return the answer in any order.

## Examples

### Example 1

**Input:** nums = [2,7,11,15], target = 9  
**Output:** [0,1]  
**Explanation:** Because nums[0] + nums[1] == 9, we return [0, 1].

### Example 2

**Input:** nums = [3,2,4], target = 6  
**Output:** [1,2]

### Example 3

**Input:** nums = [3,3], target = 6  
**Output:** [0,1]

## Constraints

- `2 <= nums.length <= 10<sup>4</sup>`
- `-10<sup>9</sup> <= nums[i] <= 10<sup>9</sup>`
- `-10<sup>9</sup> <= target <= 10<sup>9</sup>`
- **Only one valid answer exists.**

## [Solution](https://github.com/TateHouse/LeetCode/blob/master/Algorithms/TwoSum/TwoSum.cpp)

1. Create an empty `std::unordered_map` to store the numbers and their indices that have already been visited.
2. Iterate through the given `std::vector` of numbers.  
   The following steps are performed each iteration:

- Calculate the complement of the current number by subtracting it from the target to get the number that would
  add up to the target if added to the current number.
- Check if the complement is already in the map.
    - If it is, return the current index and the index of the complement.
    - If it is not, add the current number and its index to the map.

### Time Complexity

The time complexity of my solution is *O(n)* because, in the worst-case scenario, the entire `std::vector` would be
iterated through *n* times when no two numbers in the given `std::vector` add up to the target.

### Space Complexity

The space complexity of my solution is *O(n)* because of the use of a `std::unordered_map` that could store all *n*
elements in the given worst-case scenario.

### Considerations and Alternatives

1. **Brute Force**: Iterate through the `std::vector` using two nested loops, checking each pair of numbers to see if
   they add up to the target. This solution has a time complexity of *O(n<sup>2</sup>)* and a space complexity of *O(
   1)*.
2. **Sorting + Two-Pointer**: Sort the `std::vector` and then iterate through it from both ends, checking the sum of the
   two numbers at the ends of the `std::vector` to see if they add up to the target. If the sum is less than the target,
   the left index is incremented. If the sum is greater than the target, the right index is decremented. This solution
   has a time complexity of *O(nlog(n))* and a space complexity of *O(1)*.
