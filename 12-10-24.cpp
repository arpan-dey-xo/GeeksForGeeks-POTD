class Solution {
  public:
    int pairWithMaxSum(vector<int>& arr) {
        int ans = -1;
        for(int i = 1; i < arr.size(); i++){
            ans = max(ans, arr[i] + arr[i-1]);
        }
        return ans;
    }
};