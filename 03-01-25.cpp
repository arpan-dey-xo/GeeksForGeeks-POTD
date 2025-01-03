class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        long ans=0;
        map<int,int>m;
        int x=0;
        for(auto &it:arr){
            x^=it;
            ans+=m[x^k];
            ans+=(x==k);
            m[x]++;
        }
        return ans;
    }
};