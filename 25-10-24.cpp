class Solution {
  public:
    vector<int> alternateSort(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        sort(arr.begin(),arr.end());
        int i = 0,j = n-1;
        for(int k=0; k<n; k++) {
            if (k%2) ans[k] = arr[i++];
            else ans[k] = arr[j--];
        }
        return ans;
    }
};