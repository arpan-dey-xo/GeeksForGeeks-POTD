class Solution {
    public:
    Node* solve(vector<int>&A, int& ind){
        if(A[ind]==-1){
            ind++;
            return NULL;
        }
        Node* root= new Node(A[ind]);
        ind++;
        root->left=solve(A, ind);
        root->right=solve(A, ind);
        
        return root;
    }
    
    void pre(Node* root, vector<int>&ans){
        if(root==NULL){
            ans.push_back(-1);
            return;
        }
        ans.push_back(root->data);
        pre(root->left,ans);
        pre(root->right,ans);
        
        return;
    }
    vector<int> serialize(Node *root) 
    {
        vector<int>ans;
        pre(root, ans);
        
        return ans;
    }
    
    Node * deSerialize(vector<int> &A)
    {
       int ind=0;
       return solve(A,ind);
    }
};