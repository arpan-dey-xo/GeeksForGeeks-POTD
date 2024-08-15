class Solution
{
    public:
    int solve(int n, int x, int y, int z, vector<int> &dp){
        if(n == 0) return 0;
        if(n < 0) return -1;
        
        if(dp[n]) return dp[n];
        
        int ans1 = solve(n-x, x, y, z, dp);
        int ans2 = solve(n-y, x, y, z, dp);
        int ans3 = solve(n-z, x, y, z, dp);
        dp[n] = 1 + max(max(ans1, ans2), ans3);
        return dp[n] = (dp[n] == 0)? -1: dp[n];
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        vector<int>dp(n+1, 0);
        int ans = solve(n, x, y, z, dp);
        return ans == -1? 0: ans;
    }
};