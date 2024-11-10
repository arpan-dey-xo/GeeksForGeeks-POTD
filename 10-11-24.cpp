class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> res;
        set<int> s;
        int i = 0, j = 0;
        while (i < a.size() && j < b.size()) {
            if (a[i] < b[j]) {
                s.insert(a[i++]);
            }
            else {
                s.insert(b[j++]);
            }
        }
        while (i < a.size()) {
            s.insert(a[i++]);
        }
        while (j < b.size()) {
            s.insert(b[j++]);
        }
        for (int x : s) {
            res.push_back(x);
        }
        return res;
    }
};