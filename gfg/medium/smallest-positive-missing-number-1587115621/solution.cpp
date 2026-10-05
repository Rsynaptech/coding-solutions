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