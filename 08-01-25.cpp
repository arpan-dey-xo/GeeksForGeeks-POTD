class Solution {
  public:
    int countTriangles(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int c=0;
        for(int high=n-1;high>=2;high--) {
            int low=0,i=high-1;
            while(low<i) {
                if(arr[low]+arr[i]>arr[high]) {
                    c+=i-low;
                    i--;
                }
                else low++;
            }
        }
        return c;
    }
};