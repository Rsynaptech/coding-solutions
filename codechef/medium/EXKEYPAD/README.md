# EXKEYPAD

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### The Sticky Keypad

You are given $2$ integers $N$ and $D$.

Find the smallest integer $x$ which is

- greater than or equal to $N$
- typeable without the digit $D$.

Formally, a non-negative integer $x$ is  **typeable**  if its usual decimal representation (no leading zeros; zero is written as the single digit $0$) does not contain the digit $D$.

### Input Format
- The first line contains a single integer $T$, the number of test cases.
- Each of the next $T$ lines contains two space-separated integers $N$ and $D$.
### Output Format

For each test case, output on a new line the smallest integer $x \ge N$ typeable without digit $D$.

### Constraints
- $1 \le T \le 10^{3}$
- $1 \le N \le 10^{9}$
- $0 \le D \le 9$
### Sample 1:
Input
Output

```
5
99 9
1000 0
12345 3
7 7
2026 5
```

```
100
1111
12400
8
2026

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-21T15:29:26.701Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

```
while (T--) {
    long long N;
    int D;
    cin >> N >> D;

    string s = to_string(N);

    if (D == 0) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                s[i] = '1';
                for (int j = i + 1; j < s.size(); j++) {
                    s[j] = '1';
                }
                break;
            }
        }

        cout << stoll(s) << endl;
        continue;
    }

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0' + D) {
            if (i == 0) {
                if (D == 9) {
                    s = string(s.size() + 1, '1');
                } else {
                    s[i] = '0' + D + 1;
                    for (int j = i + 1; j < s.size(); j++) {
                        s[j] = '0';
                    }
                }
            } else {
                int j = i - 1;

                while (j >= 0 && s[j] == '0' + D - 1) {
                    j--;
                }

                if (j < 0) {
                    s = string(s.size() + 1, '1');
                } else {
                    s[j]++;
                    for (int k = j + 1; k < s.size(); k++) {
                        s[k] = '0';
                    }
                }
            }
            break;
        }
    }

    cout << stoll(s) << endl;
}

return 0;
```

}


```

---

[View on CodeChef](https://www.codechef.com/problems/EXKEYPAD)