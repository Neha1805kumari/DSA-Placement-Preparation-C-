# LeetCode 69: Sqrt(x)

* **Difficulty:** Easy
* **Data Structure:** None
* **Pattern:** Binary Search

## Key Learnings

1. We need to find the integer square root, so the answer is the **floor of √x**.

2. We start `low` from `0` because `sqrt(0) = 0`, so `0` can also be the answer.

3. If `mid * mid <= x`, then `mid` is a valid answer, but a larger valid answer may exist. Move right using `low = mid + 1`.

4. If `mid * mid > x`, then `mid` is too large. Move left using `high = mid - 1`.

5. `1LL * mid * mid` converts the multiplication into `long long` to prevent integer overflow.

6. At the end, `low` becomes the first invalid value, so `high` remains the largest valid value. Therefore, return `high`.

## Dry Run

For `x = 8`:

```text
low = 0, high = 8, mid = 4 → 16 > 8 → high = 3
mid = 1 → 1 <= 8 → low = 2
mid = 2 → 4 <= 8 → low = 3
mid = 3 → 9 > 8 → high = 2
```

Finally:

```text
low = 3, high = 2
return high = 2
```

For `x = 25`, the answer is `5`.

## Mistakes I Made

* Initially wondered why the search starts from `0` instead of `1`.
* Learned that `0` can be the answer.
* Understood why we return `high` instead of `low`.
* Learned why `1LL` is needed for safe multiplication.

## Complexity

* **Time:** O(log x)
* **Space:** O(1)
