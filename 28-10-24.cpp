class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        int mm[101]={0};
        vector<int> ans;
        for(int x:arr) {
            if(!mm[x]) {
                ans.push_back(x);
                mm[x]=1;
            }
        }
        return ans;
    }
};