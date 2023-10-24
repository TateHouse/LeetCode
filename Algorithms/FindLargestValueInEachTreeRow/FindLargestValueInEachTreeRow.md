# Find Largest Value in Each Tree Row

## Problem

Given the `root` of a binary tree, return *an array of the largest value in each row of the tree* **(0-indexed)**.

## Examples

### Example 1

**Input:** root = [1,3,2,5,3,null,9]
**Output:** [1,3,9]

### Example 2

**Input:** root = [1,2,3]
**Output:** [1,3]

## Constraints

- The number of nodes in the tree will be in the range [1, 104].
- -231 <= Node.val <= 231 - 1

## [Solution](https://github.com/TateHouse/LeetCode/blob/master/Algorithms/FindLargestValueInEachTreeRow/FindLargestValueInEachTreeRow.cpp)

1. If the root node is null, return an empty vector.
2. Use a breadth-first search (BFS) approach to traverse the tree level by level. A queue is used for this purpose.
3. For each level:
   - Determine the number of nodes at this level by checking the size of the queue.
   - Initialize the largest value for this level as the smallest possible integer.
   - For each node at this level:
     - Compare its value to the current largest value for this level and update the largest value if necessary.
     - Add the node's children to the queue if they exist.
   - Add the largest value for this level to the result vector.
4. Return the vector containing the largest values at each level.

### Time Complexity
The time complexity of my solution is *O(n)* where *n* is the number of nodes in the tree. This is because each node is
visited once.

### Space Complexity
The space complexity of my solution is *O(n)* where *n* is the number of nodes in the tree. This is because the queue
will contain at most *n* nodes.

### Considerations and Alternatives
1. **Depth-First Search (DFS)**: A DFS approach could also be used to solve this problem. This would involve keeping track
   of the current depth and the largest value at each depth. This would be slightly more complicated than the BFS
   approach, but would have the same time and space complexity.