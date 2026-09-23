# LeetCode 1482 — Minimum Number of Days to Make m Bouquets

**Difficulty:** Medium  
**Data Structure:** Array  
**Pattern:** Binary Search on Answer

## Problem
Given an array `bloomDay`, where `bloomDay[i]` represents the day the `i-th` flower blooms.

To make one bouquet:
- We need exactly `k` flowers.
- The flowers must be adjacent.
- A flower can be used only once.

We need to find the **minimum number of days** required to make `m` bouquets.

If it is impossible, return `-1`.

## Approach

Use **Binary Search on Answer**.

- `low` = minimum bloom day in the array
- `high` = maximum bloom day in the array
- `mid` = candidate day

For each candidate day:
1. Traverse the array.
2. If `bloomDay[i] <= mid`, the flower has bloomed.
3. Count consecutive bloomed flowers using `cons_day`.
4. Whenever `cons_day == k`, form one bouquet and reset `cons_day`.
5. If the number of bouquets is at least `m`, try a smaller day.
6. Otherwise, search for a larger day.

Before binary search, check whether `m * k` flowers are available in total.

## Key Learnings

- Learned **Binary Search on Answer**.
- Binary search can be applied to a range of possible answers, not only array indices.
- `mid` represents a candidate **day**.
- For each candidate day, we perform a feasibility check.
- Consecutive flowers are tracked using a counter.
- An unbloomed flower resets the consecutive count because bouquets require adjacent flowers.
- When a candidate day works, search for a smaller valid day.

## Important Mistake I Avoided

Do not `break` when an unbloomed flower is found.

Instead:

```cpp
cons_day = 0;