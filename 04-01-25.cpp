class Solution {
  public:
    int countTriplets(vector<int> &a, int target) {
        int ans = 0;
        unordered_map<int,int> m;
        for (auto &i : a) m[i]++;
        for (int i=0; i<a.size(); i++) {
            m[a[i]]--;
            for (int j=i-1; j>=0; j--) {
                if (m.find(target-(a[i]+a[j])) != m.end())
                ans += m[target-(a[i]+a[j])];
            }
        }
        return ans;
    }
};