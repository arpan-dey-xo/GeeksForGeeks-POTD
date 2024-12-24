class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int row = mat.size();
        int col = mat[0].size();
        int tot = row*col -1;
        int s = 0;
        int e = tot;
        while(s<=e){
            int mid = s+(e-s)/2;
            int rIdx = mid/col;
            int cIdx = mid%col;
            if(mat[rIdx][cIdx] == x) return true;
            else if(mat[rIdx][cIdx] < x) s=mid+1;
            else e=mid-1;
        }
        
        return false;
    }
};