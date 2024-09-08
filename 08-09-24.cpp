class Solution {
  public:
    int minJumps(vector<int>& arr) {
        if(!arr[0])return -1;
        int ans = 1, jump = arr[0], mx = 0;
        for(int i=1;i<arr.size();i++){
            mx--;
            jump--;
            mx=max(mx,arr[i]);
            if(!jump and i!=arr.size()-1){
                if(mx<=0)return -1;
                jump=mx;
                mx=0;
                ans++;
            }
        }
        return ans;
    }
};