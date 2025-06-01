class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        int n = mat1.size(), ans = 0;
        for(int i = 0, j = n * n - 1; i < n * n && j >= 0; ) {
            int tmp = mat1[i / n][i % n] + mat2[j / n][j % n];
            if(tmp == x) {
                ans++; i++; j--;
            } else if(tmp < x) i++;
            else j--;
        }
        return ans;
    }
};