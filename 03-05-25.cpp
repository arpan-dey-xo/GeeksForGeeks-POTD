class Solution {
    public:
      unordered_map<int, bool> visited;
      void primeCollect(int x, vector<int> &p){
          for(int i=2;i<=2*x;i++){
              if(!visited[i]){
                  p.push_back(i);
                  for(int j=i;j<=2*x;j+=i)
                      visited[j] = true;
              }
          }
          return;
      } 
      
      int lowerInd(int l, int r, vector<int> &v, int &x){
          if(l>r)
              return -1;
          int m = l+(r-l)/2;
          if(v[m] == x)
              return m;
          if(v[m] < x)
              return max(m, lowerInd(m+1, r, v, x));
          return lowerInd(l, m-1, v, x);    
      }
  
      Node* primeList(Node *head) {
          int maxi = 0;
          Node* h = head;
          while(h){
              maxi = max(maxi, h->val);
              h = h->next;
          }
          
          vector<int> p;
          primeCollect(maxi, p);
          int n = p.size();
          
          h = head;
          while(h){
              int t = h->val;
              if(t==1){
                  h->val = 2;
                  h = h->next;
                  continue;
              }
              
              int l = lowerInd(0, n-1, p, t);
              if(p[l]>=t || l==(n-1))
                  h->val = p[l];
              else if(l<(n-1)){
                  int d1 = t - p[l];
                  int d2 = p[l+1] - t;
                  if(d1 <= d2)
                      h->val = p[l];
                  else
                      h->val = p[l+1];
              }
              
              h = h->next;
          }
          
          return head;
      }
  };