class Solution {
  public:
    vector<int> findSplit(vector<int>& arr) {
        vector<int> ans = {-1, -1};
        int sum = accumulate(arr.begin(), arr.end(), 0);
        if (sum%3 != 0) return ans;
        
        int tar = sum/3;
        int curr_sum = 0;
        int index = 0;
        for (int i = 0; i < arr.size(); i++){
            curr_sum += arr[i];
            if (curr_sum == tar){
                curr_sum = 0;
                if (index < 2)
                    ans[index++] = i;
            }
        }
        
        return ans;
    }
};