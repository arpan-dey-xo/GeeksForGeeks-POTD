class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        unordered_set<int>s1,s2;
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size(); j++){
                if(mat[i][j]==0){s1.insert(i); s2.insert(j);}
            }
        }
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size(); j++){
                if(s1.find(i)!=s1.end() or s2.find(j)!=s2.end()){
                    mat[i][j]=0;
                }
            }
        }
    }
};