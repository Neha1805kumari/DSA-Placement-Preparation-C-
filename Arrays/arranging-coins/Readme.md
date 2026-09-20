# LeetCode 441 - Arranging Coins

## Problem

Given `n` coins, arrange them in a staircase shape where:

- Row 1 requires 1 coin
- Row 2 requires 2 coins
- Row 3 requires 3 coins
- ...
- Row `k` requires `k` coins

Return the number of complete rows that can be formed.

## Example

Input:

n = 8

Output:

3

Explanation:

Row 1 → 1 coin
Row 2 → 2 coins
Row 3 → 3 coins

Total = 1 + 2 + 3 = 6 coins

Only 2 coins remain, so the 4th row cannot be completed.

Therefore, the answer is 3.

## Approach

### Binary Search

We use Binary Search on the number of rows.

For `mid` rows, the number of coins required is:

mid * (mid + 1) / 2

We compare the required coins with `n`.

- If `requiredCoins == n`, return `mid`.
- If `requiredCoins > n`, we need fewer rows, so:
  
  high = mid - 1

- If `requiredCoins < n`, we can try more rows, so:
  
  low = mid + 1

After the loop, `high` represents the largest number of completely filled rows.

## C++ Solution

class Solution {
public:
    int arrangeCoins(int n) {
        int low = 1;
        int high = n;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long requiredCoins = (mid * (mid + 1)) / 2;

            if (requiredCoins == n) {
                return mid;
            }
            else if (requiredCoins > n) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return high;
    }
};

## Key Learnings

- Learned how to identify Binary Search on Answer.
- Understood how coins form a staircase.
- Used the formula `k * (k + 1) / 2` to calculate coins needed for `k` rows.
- If enough coins are available, try to build more rows.
- If coins are insufficient, search for fewer rows.
- Learned why `high` gives the final answer after the binary search.
- Used `long long` to avoid integer overflow.

## Mistakes I Made

- Initially did not understand how the staircase rows are formed.
- Made a syntax error in the multiplication formula.
- Initially used the wrong comparison condition.
- Forgot that `newM < n` is also a valid case, not only `newM == n`.
- Had `return high` outside the function because of an extra `}`.
- Used `int` for multiplication, which can cause integer overflow for large values.

## Complexity

Time Complexity: O(log n)

Auxiliary Space Complexity: O(1)

## Pattern

Binary Search on Answer