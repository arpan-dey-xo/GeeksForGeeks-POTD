using pii = pair<int, int>;
using pp = pair<int, pii>;
#define MP make_pair
const int INF = 2e9;

class Solution {
public:
    int minimumCostPath(vector<vector<int>>& G) {
        int n = G.size();
        int dir[] = {0, 1, 0, -1, 0};
        vector<vector<int>>dist(n, vector<int>(n, INF));
        priority_queue<pp, vector<pp>, greater<pp>> pq;

        dist[0][0] = G[0][0];
        pq.push(MP(dist[0][0], MP(0, 0)));

        while(!pq.empty()) {
            pp data = pq.top();
            pq.pop();
            int sd = data.first;
            pii loc = data.second;

            for(int i = 1; i <= 4; i++) {
                int x = loc.first + dir[i];
                int y = loc.second + dir[i-1];
                if(x < 0 || x >= n || y < 0 || y >= n) continue;
                int d = sd + G[x][y];
                if(d < dist[x][y]) {
                    dist[x][y] = d;
                    pq.push(MP(d, MP(x, y)));
                }
            }
        }
        return dist[n-1][n-1];
    }
};