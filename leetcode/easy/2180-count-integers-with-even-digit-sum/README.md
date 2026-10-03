# Count Integers With Even Digit Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a positive integer `num`, return  *the number of positive integers  **less than or equal to***  `num`  *whose digit sums are  **even***.

The  **digit sum**  of a positive integer is the sum of all its digits.

 

 **Example 1:** 

```
Input: num = 4
Output: 2
Explanation:
The only integers less than or equal to 4 whose digit sums are even are 2 and 4.    

```

 **Example 2:** 

```
Input: num = 30
Output: 14
Explanation:
The 14 integers less than or equal to 30 whose digit sums are even are
2, 4, 6, 8, 11, 13, 15, 17, 19, 20, 22, 24, 26, and 28.

```

 

 **Constraints:** 

- 1 <= num <= 1000

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 7.9 MB (beats 45.97%)  
**Submitted:** 2026-10-03T15:25:37.780Z  

```cpp
class Solution {
public:
    int countEven(int num) {
        int count = 0;

        for (int i = 1; i <= num; i++) {
            int a = i;
            int sum = 0;

            while (a > 0) {
                int digit = a % 10;
                sum = sum + digit;
                a = a / 10;
            }

            if (sum % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/count-integers-with-even-digit-sum/)