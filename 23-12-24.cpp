class Solution {
  public:
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        for(vector<int> &v:mat) if(binary_search(v.begin(), v.end(), x)) return true;
        return false;
    }
};