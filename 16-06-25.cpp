class Solution {
public:
    int getCost(vector<int> &heights, vector<int> &cost, int mid){
        int totalCost = 0, n = heights.size();
        for(int i = 0; i < n; ++i){
            totalCost += abs(mid - heights[i]) * cost[i];
        }
        return totalCost;
    }
    
    int minCost(vector<int>& heights, vector<int>& cost) {
        int n = heights.size();
        int low = *min_element(heights.begin(), heights.end());
        int high = *max_element(heights.begin(), heights.end());
        int ans = INT_MAX;
        
        while(low <= high) {
            int mid1 = low + (high - low)/3;
            int mid2 = high - (high - low)/3;
            
            int cost1 = getCost(heights, cost, mid1);
            int cost2 = getCost(heights, cost, mid2);
            
            ans = min({ans, cost1, cost2});
            
            if(cost1 < cost2) {
                high = mid2 - 1;
            } else {
                low = mid1 + 1;
            }
        }
        
        return ans;
    }
};