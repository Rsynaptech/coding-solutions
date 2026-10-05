# Spiral Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an `m x n` `matrix`, return  *all elements of the*  `matrix`  *in spiral order*.

 

 **Example 1:** 

```
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

```

 **Example 2:** 

```
Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]

```

 

 **Constraints:** 

- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 10
- -100 <= matrix[i][j] <= 100

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.4 MB (beats 55.62%)  
**Submitted:** 2026-10-05T17:47:26.625Z  

```cpp
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0, bottom = matrix.size()-1, left = 0 , right = matrix[0].size()-1;
        vector <int> spiral;
        while (top <= bottom && left <= right){
            for (int i = left ; i <= right ; i ++){
                spiral.push_back(matrix[top][i]);
            }
            top += 1;

            for (int j = top; j <= bottom ; j++){
                spiral.push_back(matrix[j][right]);
            }
            right -= 1;


            if (top <= bottom){
            for (int k = right; k >= left; k--){
                spiral.push_back(matrix[bottom][k]);
            }
            bottom -= 1;

            }
            if (left <= right){
            for (int l = bottom; l >= top; l--){
                spiral.push_back(matrix[l][left]);
            }
            left += 1;
            }
        }
        return spiral;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/spiral-matrix/)