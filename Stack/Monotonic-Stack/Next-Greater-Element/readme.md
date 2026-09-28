# LeetCode 496 — Next Greater Element I

## Problem
Given two arrays `nums1` and `nums2`, find the **next greater element** of each element in `nums1`.

Each element of `nums1` appears in `nums2`.

The **next greater element** of an element `x` is the first element to its right in `nums2` that is greater than `x`. If no such element exists, return `-1`.

---

## Approach

### 1. Monotonic Stack
Traverse `nums2` from **right to left**.

- Remove elements from the stack that are `<= nums2[i]`.
- If the stack is empty → NGE is `-1`.
- Otherwise → stack top is the NGE.
- Push `nums2[i]` into the stack.

This gives the NGE for **every element of `nums2`**.

### 2. Hash Map
Store the relationship:

```text
element → next greater element