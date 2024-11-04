class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        vector<vector<int>> ans;
        unordered_map<int, vector<int>> mp;

        for(int i = 0; i < arr.size(); ++i) {
            mp[arr[i]].push_back(i);
        }

        for(int i = 0; i < arr.size(); ++i) {
            for(int j = i + 1; j < arr.size(); ++j) {
                int tt = arr[i] + arr[j];
                int req = -tt;
                
                if(mp.find(req) != mp.end()) {
                    for(int x : mp[req]) {
                        if(x != i && x != j && i < j && j < x) {
                            vector<int> temp = {i, j, x};
                            ans.push_back(temp);
                        }
                    }
                }
            }
        }

        return ans;
    }
};