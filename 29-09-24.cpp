class Solution {
  public:
     int totalCount(int k, vector<int>& arr) {
        int ans = 0;
        for(auto x : arr) {
            ans += (x + k - 1) / k;
        }
        return ans;
    }
};