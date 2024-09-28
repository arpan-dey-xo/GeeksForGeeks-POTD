class Solution {
  public:
    int help(int i,int k,vector<int> &arr, vector<int> &dp) {
        if(i==arr.size()-1) return 0;
        if(dp[i]!=-1) return dp[i];
        int ans = INT_MAX;
        for(int j=i+1;j<=i+k and j<arr.size();j++) {
            int cost = abs(arr[i]-arr[j])+help(j,k,arr,dp);
            ans=min(ans,cost);
        }
        return dp[i] = ans;
    }
    
    int minimizeCost(int k, vector<int>& arr) {
        vector<int> dp(arr.size(),-1);
        return help(0,k,arr,dp);
    }
};