# LeetCode 278: First Bad Version

* **Difficulty:** Easy
* **Data Structure:** None
* **Pattern:** Binary Search / Boundary Search

## Key Learnings

1. The versions follow a monotonic pattern:

   `Good → Good → Good → Bad → Bad → Bad`

2. We need to find the **first bad version**, not just any bad version.

3. If `isBadVersion(mid)` returns `false`, the first bad version must be on the right side.

4. If `isBadVersion(mid)` returns `true`, `mid` may be the answer, so we should not remove it.

5. Use `high = mid` when the current version is bad.

6. Use `low = mid + 1` when the current version is good.

7. The search continues until `low == high`.

## Mistakes I Made

* Started `low` from `0` instead of `1`.
* Moved `low` by only `1` instead of moving it to `mid + 1`.
* Used a loop condition that could make the search get stuck.
* Initially did not understand why `high = mid` is used instead of `high = mid - 1`.
* Learned that a bad version can still be the first bad version.

## Complexity

* **Time:** O(log n)
* **Space:** O(1)
