class Solution {
    public:
      bool isHeap(Node* tree) {
          queue<Node*>q;
          q.push(tree);
          while(!q.empty()){
              int sz=q.size();
              bool shouldWeHave=1;
              for(int i=0; i<sz; i++){
                  Node* node=q.front();
                  q.pop();
                  
                  if(node->left){
                      if(!shouldWeHave || node->left->data>node->data){
                          return 0;
                      }
                      else{
                          q.push(node->left);
                      }
                  }else shouldWeHave=0;
                  
                  if(node->right){
                      if(!shouldWeHave || node->right->data>node->data){
                          return 0;
                      }
                      else{
                          q.push(node->right);
                      }
                  }else shouldWeHave=0;
              }
          }
          return 1;
      }
  };