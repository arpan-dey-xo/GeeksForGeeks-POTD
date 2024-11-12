class Solution {
  public:
  
    bool static compare(const vector<int>&a, const vector<int>&b){
       return a[0] < b[0];
    }
    
    bool canAttend(vector<vector<int>>&arr) {
        sort(arr.begin(), arr.end(), compare);
        int n = arr.size();
        bool attend = true;
        for (int i = 1; i < n; i++) {
            int currStart = arr[i][0];
            int prevEnd = arr[i-1][1];
            if (currStart < prevEnd) {
                attend = false;
                break;
            }
        }
        return attend;
    }
};