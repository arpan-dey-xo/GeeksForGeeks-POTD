class Solution {
    public:
      int countIslands(vector<vector<char>>& grid) {
          int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1};
          int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
          int n = grid.size();
          int m = grid[0].size();
          int ans = 0;
          for(int i= 0; i < n; i++){
              for(int j = 0; j < m; j++){
                  if(grid[i][j] == 'L'){
                      queue<pair<int,int>>q; 
                      q.push({i, j});
                      grid[i][j] = 'W';
                      ans += 1;
                      while(!q.empty()){
                          auto f = q.front();
                          q.pop();
                          for(int k = 0; k < 8; k++){
                              int nx = f.first + dx[k];
                              int ny = f.second + dy[k];
                              if(nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == 'L'){
                                  q.push({nx, ny});
                                  grid[nx][ny] = 'W';
                              }
                          }
                      }
                  }
              }
          }
          return ans;
      }
  };