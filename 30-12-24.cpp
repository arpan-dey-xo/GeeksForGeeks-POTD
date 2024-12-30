class Solution {
  public:
    int findUnion(vector<int>& a, vector<int>& b) {
        a.insert(a.end(),b.begin(),b.end());
        unordered_set<int>st(a.begin(),a.end());
        return st.size();
    }
};