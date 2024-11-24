class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int kadane = INT_MIN, count = 0;
        for (int i = 0; i < arr.size(); i++) {
            count += arr[i];
            kadane = max(kadane, count);
            if (count < 0)
            count = 0;
        }
        return kadane;
    }
};