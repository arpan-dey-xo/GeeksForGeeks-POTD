class Solution {
  public:
    int subArraySum(vector<int>& arr, int tar) {
        unordered_map<int,int> mm;
        int ans=0,sum=0;
        for(int x:arr){
            sum+=x;
            if(sum==tar)ans++;
            if(mm.find(sum - tar) != mm.end())ans+=mm[sum-tar];
            mm[sum]++;
        }
        return ans;
    }
};