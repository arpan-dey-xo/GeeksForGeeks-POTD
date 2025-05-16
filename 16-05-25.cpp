class Solution {
  public:
    vector<int> findSmallestRange(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();

        priority_queue<pair<int, pair<int, int>>,
                       vector<pair<int, pair<int, int>>>,
                       greater<>> minHeap;

        int maxVal   = INT_MIN;
        int maxEl    = -1;
        int minEl    = -1;
        int minRange = INT_MAX;

        for (int i = 0; i < n; i++) {
            minHeap.push({ arr[i][0], { i, 0 } });
            maxVal = max(maxVal, arr[i][0]);
        }

        while (true) {
            auto top = minHeap.top();
            minHeap.pop();

            int minVal = top.first;
            int row    = top.second.first;
            int col    = top.second.second;

            if (maxVal - minVal < minRange) {
                minRange = maxVal - minVal;
                minEl    = minVal;
                maxEl    = maxVal;
            }

            if (col + 1 == m) {
                break;
            }

            int nextVal = arr[row][col + 1];
            minHeap.push({ nextVal, { row, col + 1 } });

            maxVal = max(maxVal, nextVal);
        }

        return { minEl, maxEl };
    }
};