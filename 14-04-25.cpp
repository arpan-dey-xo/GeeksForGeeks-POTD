class Solution {
    public:
      string findOrder(vector<string> &words) {
          int n = words.size();
          vector<vector<int>> adj(26);       
          vector<bool> present(26, false);    
          vector<int> indegree(26, 0);      
          for (auto &word : words) {
              for (char c : word) {
                  present[c - 'a'] = true;
              }
          }
  
          for (int i = 0; i < n - 1; i++) {
              string str1 = words[i];        
              string str2 = words[i + 1];        
              int len = min(str1.size(), str2.size());
              bool check = false;
              for (int ind = 0; ind < len; ind++) {
                  if (str1[ind] != str2[ind]) {
                      adj[str1[ind] - 'a'].push_back(str2[ind] - 'a');
                      indegree[str2[ind] - 'a']++;
                      check = true;
                      break;
                  }
              }
              if (!check && str1.length() > str2.length()) {
                  return "";
              }
          }
  
          queue<int> q;
          for (int i = 0; i < 26; i++) {
              if (present[i] && indegree[i] == 0) {
                  q.push(i);
              }
          }
  
          string ans = ""; 
          while (!q.empty()) {
              int node = q.front();
              q.pop();
              ans += char(node + 'a');
  
              for (auto it : adj[node]) {
                  indegree[it]--;
                  if (indegree[it] == 0) {
                      q.push(it);
                  }
              }
          }
  
          for (int i = 0; i < 26; i++) {
              if (present[i] && indegree[i] > 0) {
                  return "";
              }
          }
  
          return ans;
      }
  };