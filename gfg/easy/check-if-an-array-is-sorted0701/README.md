# Check Sorted Array

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array  **arr[]**, check whether it is sorted in non-decreasing order. Return true if it is sorted otherwise false.

 **Examples:** 

```
Input: arr[] = [10, 20, 30, 40, 50]
Output: true
Explanation: The given array is sorted.
```

```
Input: arr[] = [90, 80, 100, 70, 40, 30]
Output: false
Explanation: The given array is not sorted.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T18:07:12.777Z  

```cpp
class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        for (int i = 1; i < arr.size(); i++)
              if (arr[i - 1] > arr[i])
                  return false;

          return true;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1)