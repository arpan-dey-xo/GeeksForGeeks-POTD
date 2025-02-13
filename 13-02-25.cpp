class Solution {
    public:
      void solve(Node* root, int target, set<int> &st, bool &ans){
          if(root == NULL) return;
          if(ans == true) return;
          
          solve(root->left, target, st, ans);
          solve(root->right, target, st, ans);
          
          int diff = target - root->data;
          if(st.count(diff)) ans = true;
          st.insert(root->data);
      }
      
      bool findTarget(Node *root, int target) {
         set<int> st;
         bool ans = false;
         solve(root, target, st, ans);
         return ans;
      }
  
  
  };