class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            if(mat[i][m-1]>=x && mat[i][0]<=x){
                if(binSearch(mat,i,x)) return true;
            }
        }
        return false;
    }
    
    bool binSearch(vector<vector<int>> &mat, int row,int x){
        int start=0;
        int end=mat[0].size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mat[row][mid]==x) return true;
            else if(mat[row][mid]<x){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
};