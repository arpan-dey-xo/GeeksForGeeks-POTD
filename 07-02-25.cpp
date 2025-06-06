class Solution {
    public:
      void solve(Node* node,vector<int> &res){
          if(!node)
          return;
          
          solve(node->left,res);
          res.push_back(node->data);
          solve(node->right,res);
      }
      vector<int> inOrder(Node* root) {
          vector<int> res;
          solve(root,res);
          return res;
      }
  };