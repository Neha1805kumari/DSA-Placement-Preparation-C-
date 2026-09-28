# LeetCode 1929 — Concatenation of Array

**Difficulty:** Easy  
**Data Structure:** Array / Vector  
**Pattern:** Array Traversal & Indexing

## Problem
Given an integer array `nums`, create an array `ans` such that:

`ans = nums + nums`

For example:

```text
nums = [1, 2, 3]

ans = [1, 2, 3, 1, 2, 3]
```

## Approach
1. Find the size of the original array: `n = nums.size()`.
2. The answer will contain `2n` elements.
3. Create a vector of size `2n`.
4. Copy the original array into the first half.
5. Copy the original array again into the second half using `i - n`.
6. Return the resulting array.

## Complexity

- **Time:** `O(n)` — each element is processed once.
- **Space:** `O(n)` — a new array of size `2n` is created.

## Key Learnings
- Using `nums.size()` to get the number of elements.
- Creating a vector with a required size.
- Understanding array indexing.
- Using the relationship `i - n` to access elements for the second half.
- Practicing basic array traversal before moving to more advanced patterns.