class Solution {
  public:
    void help(Node* root, int k, int &ans){
        if(!root)
            return;
        if(root->data > k)
            help(root->left, k, ans);
        else{
            ans = root->data;
            help(root->right, k, ans);
        }
        return;
    }
  
    int findMaxFork(Node* root, int k) {
        int ans = -1;
        help(root, k, ans);
        return ans;
    }
};