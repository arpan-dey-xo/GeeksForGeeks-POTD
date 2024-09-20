class Solution {
  public:
    int countBuildings(vector<int> &height) {
        int ans = 1, mx = height[0];
        for(auto x:height){
            if(x>mx){
                mx=x;
                ans++;
            }
        }
        return ans;
    }
};