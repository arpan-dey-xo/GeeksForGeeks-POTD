class Solution {
    public:
      int findTarget(vector<int>& arr, int target) {
          int n = arr.size();
          int low = 0, high = n-1;
          while(low <= high) {
              int mid = (low + high)/2;
              
              if(arr[mid] == target) {
                  return mid;
              }
              else if(arr[mid] >= target) {
                  if(arr[mid+1] == target) {
                      return mid+1;
                  }
                  high = mid-1;
              }
              else {
                  if(arr[mid-1] == target) {
                      return mid-1;
                  }
                  low = mid+1;
              }
          }
          return -1;
      }
  };