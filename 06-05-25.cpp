class Solution {
    public:
      void check(int level, Node *root, vector<int> &res) {
          if (root == NULL) return;
          if (level == res.size()) res.push_back(root->data);
          check(level + 1, root->left, res);
          check(level + 1, root->right, res);
      }
      
      vector<int> leftView(Node *root) {
          vector<int> res;
          check(0, root, res);
          return res;
      }
  };