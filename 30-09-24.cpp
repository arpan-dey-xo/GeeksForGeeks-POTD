class Solution {
  public:
    void help(Node *root,vector<int> &temp){
        if(!root)return;
        help(root->left,temp);
        temp.push_back(root->data);
        help(root->right,temp);
    }
    vector<int> merge(Node *root1, Node *root2) {
        vector<int> first,second,ans;
        help(root1,first);
        help(root2,second);
        int i=0,j=0;
        while(i<first.size() and j<second.size()){
            if(first[i]<=second[j])ans.push_back(first[i++]);
            else ans.push_back(second[j++]);
        }
        while(i<first.size())ans.push_back(first[i++]);
        while(j<second.size())ans.push_back(second[j++]);
        return ans;
    }
};