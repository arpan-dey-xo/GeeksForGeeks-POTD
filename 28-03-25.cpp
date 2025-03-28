class Solution {
    public:
      static bool comp(pair<int,int>&a,pair<int,int>&b){
          return a.second<b.second;
      }
      int activitySelection(vector<int> &start, vector<int> &finish) {
          vector<pair<int,int>>v;
          int cnt=1;
          int n=start.size();
          for(int i=0; i<n; i++){
              v.push_back({start[i],finish[i]});
          }
  
          sort(v.begin(),v.end(),comp);
          int prevFinishTime=v[0].second;
          for(int i=1; i<v.size(); i++){
              int currStartTime=v[i].first;
              if(currStartTime > prevFinishTime){
                  cnt++;
                  prevFinishTime=v[i].second;
              }
              
          }
          return cnt;
      }
  };