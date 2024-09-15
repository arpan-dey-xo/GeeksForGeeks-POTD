class Solution {
  public:
    Node *head = NULL, *lastNode = NULL;
    void help(Node *root){
        if(!root)return;
        help(root->left);
        if(!head)head=root;
        if(lastNode)lastNode->right=root;
        root->left=lastNode;
        lastNode=root;
        help(root->right);
    }
    Node* bToDLL(Node* root) {
        help(root);
        return head;
    }
};