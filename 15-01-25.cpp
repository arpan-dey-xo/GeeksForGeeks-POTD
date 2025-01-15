class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int,int>m;
        m[0] = -1;
        int n = arr.size();
        int sum = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(m.find(sum-k)!=m.end()){
                ans = max(ans,i - m[sum-k]);
            }
            if(m.find(sum)==m.end()){
                m[sum] = i;
            }
        }
        return ans;
    }
};