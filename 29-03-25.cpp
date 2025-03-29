class Solution {
    public:
      bool static comp(pair<int, int>&a, pair<int, int>&b){
          return a.first>b.first;
      }
    
      vector<int> jobSequencing(vector<int> &deadline, 
      vector<int> &profit) {
          int n=profit.size();
          vector<pair<int, int>>v;
          
          for(int i=0; i<n; i++){
              v.push_back({profit[i], deadline[i]});
          }
          
          sort(v.begin(), v.end(), comp);
          
          vector<int>tmp(n+1, -1);
          
          int ans=0, cnt=0;
          
          for(int i=0; i<n; i++){
              int ind=v[i].second;
              while(ind>=1 && tmp[ind]>=0){
                  ind--;
              }
              if(ind>=1 && tmp[ind]<0){
                  cnt++;
                  ans+=v[i].first;
                  tmp[ind]=v[i].second;
              }
          }
          return {cnt, ans};
      }
  };