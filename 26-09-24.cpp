class Solution {
  public:
    int maxStep(vector<int>& arr) {
        int ans = 0, increaseCount = 0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>arr[i-1])increaseCount++;
            else{
                ans=max(ans,increaseCount);
                increaseCount=0;
            }
        }
        ans=max(ans,increaseCount);
        return ans;
    }

};