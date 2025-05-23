class Solution {
  public:
    int noOfWays(int m, int n, int x) {
        vector<int>prev(x + 1 , 0 ) ;
        prev[0] = 1 ;
        
        for(int i = 1 ; i <= n ; i ++){
            vector<int>curr(x + 1 , 0 );
            for(int j = 1 ; j <= x ; j ++){
                int ans = 0 ;
                for(int k = 1 ; k <= m ; k ++){
                    if(k > j) break ;
                    ans += prev[j - k] ;
                }
                curr[j] = ans ;
            }
            prev = curr ;
        }
        return prev[x] ;
    }
};