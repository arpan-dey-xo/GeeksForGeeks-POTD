class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        unordered_map<int, int> freq; 
        int count = 0;
        for (int x: arr) {
            int negative = target - x;
            if (freq[negative] > 0)count += freq[negative];
            
            freq[x]++;
        }
        return count;
    }
};