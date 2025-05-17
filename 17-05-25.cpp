class Solution {
  public:
    vector<int> sortArray(vector<int> &arr, int A, int B, int C) {
        for(int i = 0 ; i<arr.size();i++){
            int x = arr[i];
            int res =  (A*(x*x)) + (B*x) + C;
            arr[i] = res;
        }
        sort(arr.begin(),arr.end()); 
        return arr;
    }
};