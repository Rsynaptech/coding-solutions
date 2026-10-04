class Solution {
public:
    int missingNum(vector<int>& arr) {
        long long n = arr.size() + 1;

        long long sum = n * (n + 1) / 2;

        for (int i = 0; i < arr.size(); i++) {
            sum -= arr[i];
        }

        return sum;
    }
};