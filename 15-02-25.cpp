class Solution {
    public:
      bool traverse(vector<Node*> &first,Node *root,Node *n){
          if(!root) return false;
          first.push_back(root);
          if(root==n) return true;
          if(traverse(first,root->left,n)||traverse(first,root->right,n)){
              return true;
          }
          first.pop_back();
          return false;
      }
      Node* LCA(Node* root, Node* n1, Node* n2) {
          vector<Node*> first;
          vector<Node*> second;
          traverse(first,root,n1);
          traverse(second,root,n2);
          
          int i;
          for( i=0;i<first.size()&&i<second.size();i++){
              if(first[i]!=second[i]) break;
          }
          return first[i-1];
      }
  };