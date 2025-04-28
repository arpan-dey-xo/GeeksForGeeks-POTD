class Solution {
    public:
      pair<int,int> dfs(Node* root){
          if(!root)return {0,0};
          auto l=dfs(root->left);
          auto r=dfs(root->right);
          return {root->data+l.second+r.second,max({l.first+r.first,l.second+r.second,
              l.first+r.second,r.first+l.second
          })};
      }
      int getMaxSum(Node *root) {
          auto ans=dfs(root);
          return max(ans.first,ans.second);
      }
  };