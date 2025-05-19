class Solution {
  public:
    vector<Node*> findPreSuc(Node* root, int key) {
        Node* predd = NULL;
        Node* succ = NULL;
        vector<Node*> res;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()) {
            int size = q.size();
            for(int i=0;i<size;i++) {
                Node* curr = q.front();
                q.pop();
                if(curr->data<key) {
                    if(predd == NULL or curr->data>predd->data) predd = curr;
                }
                else if(curr->data>key) {
                    if(succ ==NULL or curr->data<succ->data) succ = curr;
                }
                    
                if(curr->left!=NULL) {
                    q.push(curr->left);
                }
                if(curr->right!=NULL) {
                    q.push(curr->right);
                    
                }
            }
        }
        return {predd,succ};
    }
};