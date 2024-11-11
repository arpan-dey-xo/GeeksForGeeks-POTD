class Solution {
  public:
     int minIncrements(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        map<int, int> m;
        int ans = 0;
        int curr = 0;
        for (auto &i : arr) {
            if (m[i] == 0) {
                m[i]++;
            }
            else {
                if (curr > i) {
                    ans += curr - i;
                    i = curr;
                }
                while (m[i]) {
                    i++;
                    ans++;
                }
                m[i]++;
                curr = i;
            }
        }
        return ans;
    }
};