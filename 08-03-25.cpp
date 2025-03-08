class Solution {
    public:
      bool ispalindrome(int i,int j,string &s,vector<vector<int>> &dp){
          if(i>=j) return 1;
          if(dp[i][j]!=-1) return dp[i][j];
          
          if(s[i]==s[j]) return dp[i][j]=ispalindrome(i+1,j-1,s,dp);
          
          return dp[i][j]=0;
      }
    
      string longestPalindrome(string &s) {
          int n=s.size();
          vector<vector<int>>dp(n,vector<int>(n,-1));
          
          int maxlen=0,a=-1;
          for(int i=0;i<n;i++){
              for(int j=i;j<n;j++){
                  if(ispalindrome(i,j,s,dp) && j-i+1>maxlen){
                      maxlen=j-i+1;
                      a=i;
                  }
              }
          }
          
          return s.substr(a,maxlen);
      }
  };