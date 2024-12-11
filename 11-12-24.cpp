class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size();
        
        for (int i = 0; i < b.size(); i++) {
            a.push_back(b[i]);
        }
        
        sort(a.begin(), a.end());
        
        int m = a.size();
        
        int k = 0;
        for (int i = n; i < m; i++) {
            b[k] = a[i];
            k++;
        }
        
        for (int i = 0; i < m - n; i++) {
            a.pop_back();
        }
    }
};