class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        int n = matrix.size(), m = matrix[0].size(), s = n * m;
        int a = 0, b = 0, c = n - 1, d = m - 1;
        vector<int> ans;
        while (ans.size() < s) {
            for (int i = b; i <= d && ans.size() < s; i++) ans.push_back(matrix[a][i]);
            a++;
            for (int i = a; i <= c && ans.size() < s; i++) ans.push_back(matrix[i][d]);
            d--;
            for (int i = d; i >= b && ans.size() < s; i--) ans.push_back(matrix[c][i]);
            c--;
            for (int i = c; i >= a && ans.size() < s; i--) ans.push_back(matrix[i][b]);
            b++;
        }
        return ans;
    }
};