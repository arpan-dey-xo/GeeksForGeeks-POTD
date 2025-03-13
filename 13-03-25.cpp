class Solution {
    public:
      int knapsack(int W, vector<int> &val, vector<int> &wt) {
          int n=wt.size();
          vector<int>prev(W+1, 0), curr(W+1, 0);
          for(int i=1; i<=n; i++){
              for(int w=0; w<=W; w++){
                  if(wt[i-1]<=w) curr[w]=max(val[i-1]+prev[w-wt[i-1]], prev[w]);
                  else curr[w]=prev[w];
              }
              prev=curr;
          }
          return prev[W];
      }
  };