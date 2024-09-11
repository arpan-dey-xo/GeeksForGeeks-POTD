class Solution {
  public:
    long long minCost(vector<long long>& arr) {
        long long ans = 0;
        priority_queue<long long,vector<long long>, greater<long long>> pq;
        for(auto x:arr)pq.push(x);
        while(pq.size()!=1){
            long long first = pq.top();
            pq.pop();
            long long second = pq.top();
            pq.pop();
            long long total = first+second;
            pq.push(total);
            ans+=total;
        }
        return ans;
    }
};