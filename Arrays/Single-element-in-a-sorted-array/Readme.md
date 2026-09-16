# LeetCode 540 — Single Element in a Sorted Array

- **Difficulty:** Medium
- **Data Structure:** Array / Vector
- **Pattern:** Binary Search
- **Language:** C++

## Problem

Given a sorted array where every element appears exactly twice except one element, find the single element.

The solution must run in **O(log n)** time and **O(1)** extra space.

## Key Learnings

- In a sorted array, duplicate elements appear in pairs.
- Before the single element, pairs begin at even indexes.
- After the single element, the pairing pattern shifts.
- If `mid` is odd, adjust it to the previous even index.
- Compare:
  ```cpp
  nums[mid] == nums[mid + 1]