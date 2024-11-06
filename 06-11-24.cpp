class Solution {
  public:
    int totalSum = 0;
    void sum(Node *root, int currSum) {
        if(root -> left == NULL && root -> right == NULL) {
            totalSum += 10 * currSum + root -> data;
            return;
        }
        
        if(root -> left) sum(root -> left , currSum * 10 + root -> data);
        if(root -> right) sum(root -> right , currSum * 10 + root -> data);
    }
    
    int treePathsSum(Node *root) {
        if(root == NULL) return 0;
        sum(root, 0);
        return totalSum;
    }
};