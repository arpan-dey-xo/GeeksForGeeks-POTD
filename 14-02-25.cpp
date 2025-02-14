class Solution {
    public:
     void inorder(Node* node, Node* &prev, Node* &first, Node* &second,Node* &temp ){
         if(!node)
         return;
         
         inorder(node->left,prev,first,second,temp);
         
         if(prev && node->data<prev->data){
             if(!first){
                 first=prev;
                 temp=node;
             } 
             else second=node;
         }
         
         prev=node;
         inorder(node->right,prev,first,second,temp);
         
      }
      void correctBST(Node* root) {
        Node* first = NULL;
        Node* second = NULL;
        Node* prev = NULL;
        Node* temp = NULL;
        
        inorder(root,prev,first,second,temp);
         
        if(first && second)
        swap(first->data,second->data);
        
        
        else
        swap(first->data,temp->data);
      }
  };