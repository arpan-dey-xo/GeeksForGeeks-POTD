class Solution {
    public:
      void tree(Node* root,vector<int>&ans) {
          if(!root) return;
          tree(root->left,ans);
          ans.push_back(root->data);
          tree(root->right,ans);
      }
      int kthSmallest(Node *root, int k) {
          vector<int>ans;
          tree(root,ans);
          if(k>ans.size())
          return -1;
          int final=ans[k-1];
          if(final==0) {
              return -1;
          }
          else return final;
      }
  };