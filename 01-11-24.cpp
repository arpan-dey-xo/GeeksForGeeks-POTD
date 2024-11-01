class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int size = arr.size();
        long long res = 0;
        for(int i = 0; i < size; i++) {
            res += abs(arr[i] - arr[size-i-1]);
        }
        return res;
    }
};