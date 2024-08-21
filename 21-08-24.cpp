class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src)
    {
        vector<int>dist(N,INT_MAX);
        queue<int>q;
        dist[src]=0;
        vector<vector<int>>adj(N);
        for (auto it: edges)
        {
            adj[it[0]].push_back(it[1]);
             adj[it[1]].push_back(it[0]);
        }
        q.push(src);
        int steps=1;
        while(!q.empty())
        {
            int sz=q.size();
            while(sz--)
            {
                int node=q.front();
                q.pop();
                for (auto it: adj[node])
                {
                    if (dist[it]==INT_MAX)
                    {
                        dist[it]=steps;
                        q.push(it);
                    }
                }
            }
            steps++;
        }
        for (int i=0;i<N;i++)
        {
            if (dist[i]==INT_MAX) dist[i]=-1;
        }
        return dist;
        
    }
};