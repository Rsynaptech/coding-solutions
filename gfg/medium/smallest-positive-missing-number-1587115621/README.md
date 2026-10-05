# Smallest Positive Missing

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array  **arr[]**. Your task is to find the smallest positive number missing from the array.

 **Note:**  Positive number starts from 1. The array can have negative integers too.

 **Examples:** 

```
Input: arr[] = [2, -3, 4, 1, 1, 7]
Output: 3
Explanation: Smallest positive missing number is 3.

```

```
Input: arr[] = [5, 3, 2, 5, 1]
Output: 4
Explanation: Smallest positive missing number is 4.

```

```
Input: arr[] = [-8, 0, -1, -4, -3]
Output: 1
Explanation: Smallest positive missing number is 1.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-05T18:08:09.620Z  

```cpp
class Solution {
public:
    int missingNumber(vector<int> &arr) {
        int n = arr.size();

        for(int i = 1; i <= n + 1; i++) {
            int found = 0;

            for(int j = 0; j < n; j++) {
                if(arr[j] == i) {
                    found = 1;
                    break;
                }
            }

            if(found == 0) {
                return i;
            }
        }

        return n + 1;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1)