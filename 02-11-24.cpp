class Solution {
  public:
    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for (int i = 0; i < k; i++) {
            if (mp[arr[i]]>0) {
                return true;
            }
            mp[arr[i]]++;
        }
        for (int i = k; i < arr.size(); i++) {
            mp[arr[i]]++;
            if (mp[arr[i]] > 1) {
                return true;
            }
            mp[arr[i-k]] = 0;
        }
        return false;
    }
};