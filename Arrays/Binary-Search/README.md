Binary Search
LeetCode: 704 - Binary Search Difficulty: Easy Data Structure: Array / Vector Pattern: Binary Search

Key Learnings
Vector size: Since nums is a vector, use nums.size(). sizeof(nums)/sizeof(nums[0]) is used for C-style arrays.

low <= high: We use <= because low can become equal to high. For example, with [5], low = high = 0, and that element still needs to be checked.

mid inside the loop: low and high change after every comparison, so mid must be recalculated each iteration.

int mid = low + (high - low) / 2;
mid vs nums[mid]: mid is the index, while nums[mid] is the value at that index. We compare the target with nums[mid].

mid - 1 / mid + 1: Once nums[mid] is not the target, mid can be eliminated. So we search either the left or right half.

Return value: We return mid when the target is found. If the entire search space is exhausted, we return -1.

Mistakes I Made
Used sizeof(nums) instead of nums.size().
Compared target with mid instead of nums[mid].
Placed return -1 inside the loop.
Initially used low < high, which could skip the low == high case.
Used an unnecessary break after return.