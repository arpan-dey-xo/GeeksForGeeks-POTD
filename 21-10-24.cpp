class Solution {
  public:
    int countgroup(vector<int>& arr) {
        int xo = 0;
        int  n = arr.size();
        for(auto it : arr) {
            xo ^= it ;
        }
        if(xo != 0) return 0;
        return pow(2, n-1) - 1;
    }
};