# LeetCode 1480 — Running Sum of 1d Array

**Difficulty:** Easy  
**Data Structure:** Array / Vector  
**Pattern:** Prefix Sum / Running Sum

## Problem

Given an array `nums`, calculate the running sum where:

`runningSum[i] = nums[0] + nums[1] + ... + nums[i]`

Example:

```text
nums = [1, 2, 3, 4]

running sum = [1, 3, 6, 10]
```

## Approach

1. Start with a variable `sum = 0`.
2. Traverse the array from left to right.
3. Add the current element to `sum`.
4. Store the updated `sum` in the result array.
5. Continue until all elements are processed.

## Complexity

- **Time:** `O(n)` — the array is traversed once.
- **Space:** `O(n)` — a result array is used to store the running sums.

## Key Learnings

- Understanding the concept of a **running sum**.
- Using previously calculated information to calculate the next value.
- Basic prefix-sum concept.
- Array traversal from left to right.
- This concept is useful in problems involving **range sums and prefix sums**.