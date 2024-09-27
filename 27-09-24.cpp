class Solution {
  public:
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
        vector<int> ans;
        deque<int> dq;
        for(int i=0;i<arr.size();i++){
            if(dq.size() and dq.front()==i-k)dq.pop_front();
            while(dq.size() and arr[dq.back()]<=arr[i])dq.pop_back();
            dq.push_back(i);
            if(i>=k-1)ans.push_back(arr[dq.front()]);
        }
        return ans;
    }
};