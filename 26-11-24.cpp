class Solution {
  public:
    int circularSubarraySum(vector<int> &arr) {
        int n = arr.size();
        int total_sum = 0;
        int max_normal = INT_MIN, max_ending = 0;
        int min_normal = INT_MAX, min_ending = 0;

        for (int i = 0; i < n; i++) {
            total_sum += arr[i];
        
            max_ending = max(arr[i], max_ending + arr[i]);
            max_normal = max(max_normal, max_ending);
            min_ending = min(arr[i], min_ending + arr[i]);
            min_normal = min(min_normal, min_ending);
        }
    
        if (max_normal < 0) return max_normal;
    
        return max(max_normal, total_sum - min_normal);
    }
};