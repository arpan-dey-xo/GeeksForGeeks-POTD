class Solution {
  public:
    int findMaxDiff(vector<int> &arr) {
        int n = arr.size();
        vector<int> nearestLeftSmaller(n, 0);
        vector<int> nearestRightSmaller(n, 0);
        nearestLeftSmaller[0] = 0;
        stack<int> st;
        st.push(arr[0]);
        for(int i = 1; i < n; i++) {
            while(st.empty() == false && st.top() >= arr[i]) {
                st.pop();
            }
            if(st.empty()) {
                nearestLeftSmaller[i] = 0;
            }
            else {
                nearestLeftSmaller[i] = st.top();
            }
            st.push(arr[i]);
        }
        nearestRightSmaller[n - 1] = 0;
        st = stack<int>();
        st.push(arr[n - 1]);
        for(int i = n - 2; i >= 0; i--) {
            while(st.empty() == false && st.top() >= arr[i]) {
                st.pop();
            }
            if(st.empty()) {
                nearestRightSmaller[i] = 0;
            }
            else {
                nearestRightSmaller[i] = st.top();
            }
            st.push(arr[i]);
        }
        int maxDiff = 0;
        for(int i = 0; i < n; i++) {
            maxDiff = max(maxDiff, abs(nearestRightSmaller[i] - nearestLeftSmaller[i]));
        }
        return maxDiff;
    }
};