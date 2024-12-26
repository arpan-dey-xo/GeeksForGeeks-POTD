class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        if(n<2) return false;
        sort(arr.begin(),arr.end());
        int l=0,r=n-1;
        while(l<r){
            int s=arr[l]+arr[r];
            if(s==target) return true;
            else if(s<target) l++;
            else r--;
        }
        return false;
    }
};