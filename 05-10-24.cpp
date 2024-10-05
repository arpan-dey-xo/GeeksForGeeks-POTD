class Solution {
  public:
    long long findSmallest(vector<int> &arr) {
        long long ans = 1;
        for(int x:arr) {
            if(x > ans) return ans;
            ans += x;
        }
        return ans;
    }
};