class Solution {
    public:
        Node* cloneGraph(Node* node) {
            Node * new_start = new Node(node -> val);
            map<int, Node *> vis;
            
            function<void(Node *, Node *)> dfs = [&](Node * cur_node, Node * org_node) {
                vis[cur_node -> val] = cur_node;
                
                for(auto child : org_node -> neighbors) {
                    bool not_vis = vis.find(child -> val) == vis.end();
                    Node * new_child;
                    if(not_vis)
                        new_child = new Node(child -> val);
                    else
                        new_child = vis[child -> val];
                        
                    (cur_node -> neighbors).push_back(new_child);
                
                    if(not_vis)
                        dfs(new_child, child);
                }
            };
            
            dfs(new_start, node);
            
            return new_start;
        }
    };