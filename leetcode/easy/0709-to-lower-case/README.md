# To Lower Case

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `s`, return  *the string after replacing every uppercase letter with the same lowercase letter*.

 

 **Example 1:** 

```
Input: s = "Hello"
Output: "hello"

```

 **Example 2:** 

```
Input: s = "here"
Output: "here"

```

 **Example 3:** 

```
Input: s = "LOVELY"
Output: "lovely"

```

 

 **Constraints:** 

- 1 <= s.length <= 100
- s consists of printable ASCII characters.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.4 MB (beats 15.57%)  
**Submitted:** 2026-10-04T17:50:05.671Z  

```cpp
class Solution {
public:
    string toLowerCase(string s) {
        string ans="";
        int n=s.length();
        for(int i=0 ; i<n ; i++){
            s[i]=tolower(s[i]);
            ans.push_back(s[i]);
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/to-lower-case/)