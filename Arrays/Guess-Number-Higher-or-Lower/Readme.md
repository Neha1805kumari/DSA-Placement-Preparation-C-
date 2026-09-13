# LeetCode 374: Guess Number Higher or Lower

* **Difficulty:** Easy
* **Data Structure:** None
* **Pattern:** Binary Search

## Key Learnings

1. The number is picked between `1` and `n`.

2. The `guess()` API tells whether our guess is:

   * Correct: `0`
   * Lower than picked number: `1`
   * Higher than picked number: `-1`

3. If the result is `1`, search on the right side.

4. If the result is `-1`, search on the left side.

5. Store the API result in a variable to avoid calling `guess(mid)` multiple times.

6. Use binary search to reduce the search space by half in every iteration.

## Mistakes I Made

* Initially called `guess(mid)` more than once in the same iteration.
* Learned that API calls should be minimized.
* Initially forgot to add a return statement after the loop.
* Understood the meaning of all three API results.

## Complexity

* **Time:** O(log n)
* **Space:** O(1)
