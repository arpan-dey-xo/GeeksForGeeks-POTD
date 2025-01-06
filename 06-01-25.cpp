class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        vector<int> ans;
        sort(arr.begin() , arr.end());
        int n = arr.size();
        int s = 0 ; int e = n-1;
        int diff=INT_MAX;
        while(s<e){
            int pairsum= arr[s]+arr[e];
            if(abs(pairsum-target)<diff){
                diff=min(abs(pairsum-target),diff);
                ans= {arr[s] , arr[e]};
            }
            if(pairsum<target)s++;
            else if(pairsum > target) e--;
            else if(pairsum==target) return ans;
        }
    }
};