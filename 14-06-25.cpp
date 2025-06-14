class Solution {
  public:
    bool isSymmetric(Node* root) {
        if (!root) return true;
        return checkSymmetric(root->left, root->right);
    }
    
    bool checkSymmetric(Node* a, Node* b) {
        if (!a || !b) return a == b;
        if (a->data != b->data) return false;
        return checkSymmetric(a->left, b->right) && checkSymmetric(a->right, b->left);
    }
};