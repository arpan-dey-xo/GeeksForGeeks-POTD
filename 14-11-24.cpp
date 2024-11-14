class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        int n = arr.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int i = 0; i <= k - 1; i++) pq.push(arr[i]);
        
        int i = 0; int j = k;
        
        while(j < n) {
            pq.push(arr[j]);
            int top = pq.top(); 
            pq.pop();
            arr[i] = top;
            i++;
            j++;
        }
        
        while (i < n && !pq.empty()){
            arr[i] = pq.top();
            pq.pop();
            i++;
        }
    }
};