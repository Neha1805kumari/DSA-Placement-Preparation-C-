# LeetCode 367: Valid Perfect Square

* **Difficulty:** Easy
* **Data Structure:** None
* **Pattern:** Binary Search

## Key Learnings

1. We need to check whether a number is a perfect square without using built-in square-root functions.

2. Use binary search between `0` and `num` to find a number whose square equals `num`.

3. If `mid * mid == num`, return `true`.

4. If `mid * mid < num`, search on the right side.

5. If `mid * mid > num`, search on the left side.

6. Use `long long` for multiplication because the square of a large integer can exceed the `int` range.

## Mistakes I Made

* Initially stored the square in an `int`, which caused integer overflow.
* Learned that using `1LL` makes the multiplication happen in `long long`, but the result must also be stored in a `long long` variable.
* Understood why large inputs such as `2147483647` can cause overflow.

## Complexity

* **Time:** O(log n)
* **Space:** O(1)
