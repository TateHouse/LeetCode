# Add Two Numbers

## Problem

You are given two **non-empty** linked lists representing two non-negative integers. The digits are stored in **reverse
order**, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

## Examples

### Example 1

**Input:** l1 = [2,4,3], l2 = [5,6,4]
**Output:** [7,0,8]
**Explanation:** 342 + 465 = 807.

### Example 2

**Input:** l1 = [0], l2 = [0]
**Output:** [0]

### Example 3

**Input:** l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
**Output:** [8,9,9,9,0,0,0,1]

## Constraints

- The number of nodes in each linked list is in the range `[1, 100]`.
- `0 <= Node.val <= 9`
- It is guaranteed that the list represents a number that does not have leading zeros.

## [Solution](https://github.com/TateHouse/LeetCode/blob/master/Algorithms/AddTwoNumbers/AddTwoNumbers.cpp)

1. Create a dummy node to serve as the head of the result linked list.
2. Initialize pointers to the heads of each of the given linked lists.
3. Initialize a carry variable to 0.
4. Iterate through the given linked lists until both pointers are `nullptr`.
5. Within the loop:
    - Initialize variables for the values of the current nodes of each linked list.
    - Extract the values of the current nodes of each linked list if they are not `nullptr` and move the pointers to the
      next nodes.
    - Calculate the sum of the values of the current nodes of each linked list.
    - Calculate the carry.
    - Calculate the value of the current node of the result linked list.
    - Instantiate a new node with the digit.
    - Add the new node to the result linked list.

6. Once out of the loop, check if the last carry is greater than 0.
    - If it is, add a new node with the carry to the result linked list.
7. Return the next node of the dummy node.

### Time Complexity

The time complexity of my solution is *O(max(m, n))* where *m* is the number of nodes in the first linked list and *n*
is the number of nodes in the second linked list because the number of iterations is equal to the number of nodes in the
longer linked list.

### Space Complexity

The space complexity of my solution is *O(max(m, n))* because the space needed to store the result linked list is equal
to the number of nodes in the longer linked list plus one because of the possible final carry node.

### Considerations and Alternatives

1. **Recursion**: Uses recursion to add the values while keeping track of the carry.
2. **Stack**: Uses stacks to reverse the input linked lists and then pop the elements from both stacks while adding
   them, handling carry as needed.