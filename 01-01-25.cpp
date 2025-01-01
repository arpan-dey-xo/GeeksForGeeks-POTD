class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        int i=0;
        int n=arr.size();
        vector<vector<string>> res;
        unordered_map<string,vector<string>> mpp;
        for (auto it:arr) {
            string temp=it;
            sort(temp.begin(),temp.end());
            mpp[temp].push_back(it);
        }
        for (auto it:mpp) {
            res.push_back(it.second);
        }
        sort(res.begin(),res.end());
        return res;
    }
};