class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        for(int i:arr) mp[i]++;
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                int sum=arr[i]+arr[j];
                if(mp.find(sum)!=mp.end()) return true;
            }
        }
        return false;
    }
};