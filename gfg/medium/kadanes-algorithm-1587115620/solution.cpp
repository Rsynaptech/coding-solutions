class Solution {
public:
    int maxSubarraySum(vector<int>& arr) {
        int current = arr[0];
        int maximum = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            current = max(arr[i], current + arr[i]);
            maximum = max(maximum, current);
        }

        return maximum;
    }
};