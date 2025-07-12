class Solution {
  public:
    int solve(int r, int c, int n, int m, vector<vector<int>>&mat, 
    vector<vector<int>>&dp){
        if(r<0 || r>=n || c<0 || c>=m) return 0;
        
        if(dp[r][c]!=-1) return dp[r][c];
        
        int same=solve(r, c+1, n, m, mat, dp);
        int up_diag=solve(r-1, c+1, n, m, mat, dp);
        int down_diag=solve(r+1, c+1, n, m, mat, dp);
        
        return dp[r][c]=mat[r][c]+max(same, max(up_diag, down_diag));
    }
  
    int maxGold(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>dp(n, vector<int>(m, -1));
        
        int maxi=0;
        for(int r=0; r<n; r++){
            maxi=max(maxi, solve(r, 0, n, m, mat, dp));
        }
        
        return maxi;
    }
};