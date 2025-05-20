class Solution {
  public:
    int minTime(Node* root, int target) {
        deque<pair<Node*, int>> q = {{root, -1}};
        unordered_map<Node*, Node*> parent;
        parent[root] = nullptr;
        Node* tar = nullptr;
        Node* node = nullptr;
        while(!q.empty()){
            node = q.front().first;
            q.pop_front();
            if(node->data == target)tar = node;
            if(node->left){
                q.push_back({node->left, -1});
                parent[node->left] = node;
            }
            if(node->right){
                q.push_back({node->right, -1});
                parent[node->right] = node;
            }
        }
        int t = 0, tt;
        q.push_back({tar, 0});
        while(!q.empty()){
            node = q.front().first;
            tt = q.front().second;
            t = max(t, tt);
            q.pop_front();
            node->data = 0;
            if(node->left && node->left->data){
                q.push_back({node->left, tt + 1});
            }
            if(node->right && node->right->data){
                q.push_back({node->right, tt + 1});
            }
            if(parent[node] && parent[node]->data){
                q.push_back({parent[node], tt + 1});
            }
        }
        return t;
    }
};