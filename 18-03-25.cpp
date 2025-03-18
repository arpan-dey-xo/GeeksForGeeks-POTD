class Solution {
    public:
      bool solve(vector<int>&arr,int sum,int i,vector<vector<int>>&dp){
          if(sum==0) return true;
          if(i>=arr.size() || sum<0) return false;
          if(dp[i][sum]!=-1) return dp[i][sum];
          return dp[i][sum]=solve(arr,sum-arr[i],i+1,dp)|solve(arr,sum,i+1,dp);
      }
      bool equalPartition(vector<int>& arr) {
          int n=arr.size();
          int sum=accumulate(arr.begin(),arr.end(),0);
          if(sum%2!=0) return false;
          int half=sum/2;
          vector<vector<int>>dp(n,vector<int>(sum,-1));
          return solve(arr,half,0,dp);
      }
  };