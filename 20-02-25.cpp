class Solution {
    public:
      vector<double> getMedian(vector<int> &arr) {
          vector<double>ans;
          int n=arr.size();
          priority_queue<double>pq_max;
          priority_queue<double,vector<double>,greater<double>>pq_min;
  
          for(int i=0;i<n;i++){
              
              if(pq_min.empty()){
                  pq_max.push(arr[i]);    
              }
              else if(pq_min.top()<arr[i]){
                  pq_min.push(arr[i]);
              }else{
                  pq_max.push(arr[i]);
              }
              
              
              if(pq_max.size()>pq_min.size()+1){
                  pq_min.push(pq_max.top());
                  pq_max.pop();
              }
              else if(pq_max.size()<pq_min.size()){
                  pq_max.push(pq_min.top());
                  pq_min.pop();
              }
              
              
              if(pq_max.size()==pq_min.size()){
                  double med=(pq_max.top()+pq_min.top())/2;
                  ans.push_back(med);
              }
              else{
                  ans.push_back(pq_max.top());
                  
              }
          }
          
          return ans;
      }
  };