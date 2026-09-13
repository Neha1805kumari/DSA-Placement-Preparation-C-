# Capacity To Ship Packages Within D Days

**LeetCode:** 1011 - Capacity To Ship Packages Within D Days

**Difficulty:** Medium

**Data Structure:** Array / Vector

**Pattern:** Binary Search on Answer

## Key Learnings

1. **Minimum possible capacity:**
   The ship must be able to carry the heaviest package, so the minimum possible capacity is the maximum element in `weights`.

   ```cpp
   int low = *max_element(weights.begin(), weights.end());
   ```

2. **Maximum possible capacity:**
   If the ship has a capacity equal to the sum of all package weights, all packages can be shipped in one day.

   ```cpp
   int high = sum;
   ```

3. **Binary Search on Answer:**
   We are not searching for an element inside the array. Instead, we are searching for the minimum possible **ship capacity** between `low` and `high`.

4. **Calculate the middle capacity:**
   We use the safe binary-search formula:

   ```cpp
   int capacity = low + (high - low) / 2;
   ```

5. **Simulating the shipping process:**
   Packages must be shipped in the given order. For every package, we check whether adding it to the current day would exceed the ship's capacity.

   ```cpp
   if (curr_weight + x > capacity)
   ```

   If it exceeds the capacity, we start a new day and make the current package the first package of that day.

6. **Checking whether a capacity works:**
   After simulating the shipping process, we count the required number of days.

   * If `req_day <= days`, the capacity is sufficient.
   * If `req_day > days`, the capacity is too small.

7. **Adjusting the binary-search range:**
   If the capacity works, we try to find an even smaller capacity.

   ```cpp
   high = capacity - 1;
   ```

   If the capacity does not work, we need a larger capacity.

   ```cpp
   low = capacity + 1;
   ```

8. **Why return `low`:**
   When the binary search ends, `low` points to the smallest capacity that can successfully ship all packages within the given number of days.

   ```cpp
   return low;
   ```

## Mistakes I Made

* Initially used the last element of the vector as the minimum capacity instead of finding the maximum weight.
* Initially misunderstood `max_element()` because it returns an iterator, not the actual maximum value.
* Tried to use `weights[max_element(...)]`, treating the iterator like an array index.
* Confused the current package `x` with an index and incorrectly tried to use `weights[x]`.
* Used `days++` instead of incrementing a separate variable `req_day`. `days` represents the maximum number of days allowed and should not be modified.
* Initially forgot that when a package does not fit, the current package must become the first package of the new day.
* Initially kept `capacity` in the search range using `high = capacity` / `low = capacity`; changed this to `capacity - 1` and `capacity + 1` to eliminate the already-tested capacity.
* Initially placed `return low` inside the `while` loop, which would stop the binary search after the first iteration.
* Learned that the answer is found by **binary searching the possible capacity**, not by directly searching the `weights` array.

## Complexity

**Time Complexity:** `O(n log(sum(weights)))`

* Each binary-search step scans all `n` packages.
* The binary search runs over the possible capacity range.

**Space Complexity:** `O(1)`

* Only a few variables are used apart from the input vector.
