class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int ans = 0;
        if (binary_search(arr.begin(), arr.end(), target)) {
            ans = upper_bound(arr.begin(), arr.end(), target) - lower_bound(arr.begin(), arr.end(), target);
        }
        return ans;
    }
};