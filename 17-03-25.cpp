class Solution {
    public:
      bool isSubsetSum(vector<int>& arr, int sum) {
          int n=arr.size();
          vector<int> prev(sum+1,0),cur(sum+1,0);
          prev[0]=1;
          
          if(arr[0]<=sum)
          prev[arr[0]]=1;
          
          for(int i=1;i<n;i++){
              cur[0]=1;
              for(int s=1;s<=sum;s++){
                  int notTake = prev[s];
                  int take = 0;
                  if(arr[i]<=s) take = prev[s-arr[i]];
                   cur[s] = take | notTake;
              }
              prev=cur;
          }
          
          return prev[sum];
      }
  };