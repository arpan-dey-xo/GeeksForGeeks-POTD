class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        
        vector<int> vec;
        int n = arr.size();
        int oneThird = n/3;
        unordered_map<int, int> ump;
        for (auto i : arr) {
            ump[i]++;
        }
        
        for (auto i : ump) {
            if (i.second > oneThird) {
                vec.push_back(i.first);
            }
        }
        sort(vec.begin(), vec.end());
        return vec;
    }
};