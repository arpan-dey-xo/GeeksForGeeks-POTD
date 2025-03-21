class Solution {
    public:
      int solve(vector<int>& arr, int idx, vector<int> &dp) {
          if(idx >= arr.size()) return 0;
          if(dp[idx] != -1) return dp[idx];
          int involve = 0, notInvolve = 0;
          involve += arr[idx] + solve(arr, idx + 2, dp);
          notInvolve = solve(arr, idx + 1, dp);
          return dp[idx] = max(involve, notInvolve);
      }
      
      int findMaxSum(vector<int>& arr) {
          vector<int> dp(arr.size(), -1);
          return solve(arr, 0, dp);
      }
  };