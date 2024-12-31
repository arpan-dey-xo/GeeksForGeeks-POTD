class Solution {
  public:

    int longestConsecutive(vector<int>& arr) {
        int maxi=*max_element(arr.begin(),arr.end());
        vector<int>vec(maxi+1,0);
        for(int i=0;i<arr.size();i++) {
            vec[arr[i]]++;
        }
        int ans=-1e9;
        int count=0;
        for(int i=0;i<=maxi;i++) {
            if(vec[i]>0) {
                count++;
            }
            else {
                ans=max(ans,count);
                count=0;
            }
        }
        return max(ans,count);
    }
};