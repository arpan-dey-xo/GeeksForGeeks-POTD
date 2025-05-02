class Solution {
    public:
      int findMaximum(vector<int> &arr) {
          for(int i=0;i<arr.size()-1;i++){
              if(arr[i]>arr[i+1]) {
                  return arr[i];
              }
          }
          return arr[arr.size()-1];
      }
  };