# LeetCode 852: Peak Index in a Mountain Array

* **Difficulty:** Medium
* **Data Structure:** Array
* **Pattern:** Binary Search

## Key Learnings

1. A mountain array first increases and then decreases.

2. The peak is the element greater than both its neighbors.

3. Compare `arr[mid]` with `arr[mid + 1]` to identify the slope.

4. If `arr[mid] < arr[mid + 1]`, we are on an increasing slope, so move right.

5. If `arr[mid] > arr[mid + 1]`, we are on a decreasing slope, so move left.

6. The peak may be at `mid`, so do not remove it unnecessarily.

## Mistakes I Made

* Initially checked `arr[mid - 1]` and `arr[mid + 1]`, which caused an out-of-bounds error.
* Learned that `mid` should not access invalid neighboring indices.
* Initially used `high = mid - 1`, which could remove the peak.
* Learned to use the slope between `mid` and `mid + 1`.

## Complexity

* **Time:** O(log n)
* **Space:** O(1)
