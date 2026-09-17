# LeetCode 875 - Koko Eating Bananas

## Problem

Koko eats bananas at a fixed speed `k` bananas per hour.

Given an array `piles` and the maximum allowed hours `h`, find the minimum eating speed that allows Koko to finish all bananas within `h` hours.

## Example

Input:

piles = [3, 6, 7, 11]
h = 8

Output:

4

At speed 4:

3  -> 1 hour
6  -> 2 hours
7  -> 2 hours
11 -> 3 hours

Total hours = 1 + 2 + 2 + 3 = 8

Therefore, the minimum eating speed is 4.

## Approach

### Binary Search on Answer

We do not need to sort the array because binary search is performed on the possible eating speed, not on the piles.

The possible speed range is:

- low = 1
- high = maximum pile size

For every speed `mid`, calculate the total number of hours required to finish all piles.

### Binary Search Logic

- If `requiredHours <= h`, the speed works. Try a smaller speed by moving:

  high = mid - 1

- If `requiredHours > h`, the speed is too slow. Try a larger speed by moving:

  low = mid + 1

After the loop ends, `low` gives the minimum valid eating speed.

## C++ Solution

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int maximum = piles[0];

        for (int i = 1; i < piles.size(); i++) {
            if (maximum <= piles[i]) {
                maximum = piles[i];
            }
        }

        int high = maximum;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long requiredHours = 0;

            for (int pile : piles) {
                if (pile % mid != 0) {
                    requiredHours += pile / mid + 1;
                } else {
                    requiredHours += pile / mid;
                }
            }

            if (requiredHours <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};

## Key Learnings

- Learned Binary Search on Answer.
- The input array does not need to be sorted.
- Binary search can be applied to a possible answer range.
- Used a separate variable for allowed hours and required hours.
- Calculated the total hours for every candidate speed.
- If a speed works, search for a smaller speed.
- If a speed fails, search for a larger speed.
- Used `long long` for safe calculations.
- The final answer is returned using `low`.

## Mistakes I Made

- Initially thought the piles needed to be sorted.
- Used `pile` instead of `piles`.
- Redeclared the function parameter `h`.
- Added required hours directly to `h`.
- Used undeclared variables `k` and `rh`.
- Placed the pile loop outside the binary-search loop.
- Reset `rh` after calculating the hours.
- Compared required hours before calculating them.
- Calculated `mid` outside the `while` loop.
- Used a condition with `else`.
- Tried to return `mid` after it went out of scope.

## Complexity

Time Complexity: O(n log m)

Where:

- n = number of piles
- m = maximum pile size

Auxiliary Space Complexity: O(1)

## Pattern

Binary Search on Answer