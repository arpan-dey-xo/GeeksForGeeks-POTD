class Solution {
  public:
    int result = INT_MIN ; 
    map<Node*,int> m ; 
    
    int find(Node* root,int target){
        if(!root)   return -1 ; 
        if(root->data == target){
            m[root] = 0 ; 
            return 0 ; 
        }
        int left = find(root->left,target) ; 
        if(left>=0){
            m[root] = left+1 ; 
            return left+1 ; 
        }
        int right = find(root->right,target) ; 
        if(right>=0){
            m[root] = right+1 ; 
            return right+1 ; 
        }
        return -1 ; 
    }
    
    void dfs(Node* root,int dist){
        if(!root)   return ;
        if(m.count(root))   dist = m[root] ; 
        result = max(result,dist) ; 
        dfs(root->left,dist+1) ; 
        dfs(root->right,dist+1) ; 
    }
    
    int minTime(Node* root, int target) {
        find(root,target) ; 
        dfs(root,m[root]) ; 
        return result ;
    }
};