class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        vector<int> store(100009, 0);
        vector<int> res;

        for (auto gg : a) store[gg] = 1;

        for (auto gg : b) {
            if (store[gg] == 1) { 
                res.push_back(gg);
                store[gg] = 0;
            }
        }

        return res;
    }
};