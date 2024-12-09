class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval) {
        vector<vector<int>> ans;
        bool merged = false;
        int start=newInterval[0],end=newInterval[1];
        
        for (auto x : intervals) {
            if (x[1] < newInterval[0]) {
                ans.push_back(x);
            }
            else if (x[0] > newInterval[1]) {
                if (!merged) {
                    ans.push_back({start, end});
                    merged = true;
                }
                ans.push_back(x);
            }
            else {
                start = min(start, x[0]);
                end = max(end, x[1]);
            }
        }
        if (!merged)
        ans.push_back({start,end});
        
        return ans;
    }
    
};