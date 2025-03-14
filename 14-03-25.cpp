class Solution {
    public:
      int dp[1005][1005];
      int solve(int ind,int tar,vector<int>&coins){
          if(tar==0) return 1;
          if(tar<0 || ind>=coins.size()) return 0;
          if(dp[ind][tar]!=-1) return  dp[ind][tar];
          
          int a=solve(ind,tar-coins[ind],coins);
          int b=solve(ind+1,tar,coins);
          
          return dp[ind][tar]=a+b;
      }
      int count(vector<int>& coins, int sum) {
          memset(dp,-1,sizeof(dp));
          return solve(0,sum,coins);
      }
  };