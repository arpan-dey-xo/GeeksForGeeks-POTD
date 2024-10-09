class Solution {
  public:
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        Node *upper=NULL, *prev=NULL, *start=NULL, *head=NULL;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                Node *temp = new Node(mat[i][j]);
                if(!head)head=temp;
                if(!upper)upper=start;
                if(i!=0){
                    upper->down=temp;
                    upper=upper->right;
                }
                if(j==0)start=temp;
                if(j!=0)prev->right=temp;
                prev=temp;
            }
        }
        return head;
    }
};