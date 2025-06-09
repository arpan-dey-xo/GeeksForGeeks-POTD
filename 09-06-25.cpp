class Solution {
  public:
    bool solve(Node* node, int mini, int maxi){
        if(!node) return false;
        if(!node->left && !node->right){
            return mini==maxi;
        }
        return solve(node->left, mini, node->data-1)||
        solve(node->right, node->data+1, maxi);
    }
  
    bool isDeadEnd(Node *root) {
        return solve(root, 1, 1e9);
    }
};