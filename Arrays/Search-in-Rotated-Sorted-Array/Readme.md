Search in Rotated Sorted Array

**LeetCode:** 33 - Search in Rotated Sorted Array

**Difficulty:** Medium

**Data Structure:** Array / Vector

**Pattern:** Binary Search on Rotated Sorted Array

## Key Learnings

1. **At least one half is always sorted:**

After finding mid, either the left half or right half will be sorted.

2. **Check mid first:**

If nums[mid] == target, return mid.

3. **Check the sorted left half:**

if (nums[low] <= nums[mid])

If the target lies within its range:

nums[low] <= target && target <= nums[mid]

search left using high = mid - 1. Otherwise, search right using low = mid + 1.

4. **Check the sorted right half:**

If the left half is not sorted, the right half is sorted:

nums[mid] <= nums[high]

If the target lies within the right range, use low = mid + 1. Otherwise, use high = mid - 1.

5. **Main idea:**

Identify the sorted half → check whether target can exist there → eliminate one half → repeat.

6. **Binary Search:**

Even though the complete array is rotated and not fully sorted, one half is always sorted, allowing us to eliminate half of the search space each time.

## Mistakes I Made

* Initially tried to create another binary search inside the sorted half using separate variables l, h, and m.

* Initially used if(true) instead of directly handling whether the target belongs to the sorted half.

* Initially forgot to handle the case when the target is not inside the sorted half.

* Initially used num[low] instead of nums[low] and other undeclared variables like l, h, m, and i.

* Initially checked the right sorted half using the wrong condition; learned to use nums[mid] <= nums[high].

* Initially forgot the final return -1 when the target is not found.

* Learned that the sorted half is used to decide which half to eliminate, not to perform a separate binary search.

## Complexity

**Time Complexity:** O(log n)

* Each iteration eliminates approximately half of the search space.

**Space Complexity:** O(1)

* Only a few variables are used apart from the input vector.