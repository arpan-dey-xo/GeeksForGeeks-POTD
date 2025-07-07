class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) {
        int n=arr.size();
        stack<int> st;
        
        for(int j=n-2;j>=0;j--) st.push(arr[j]);
        
        vector<int> v(n,-1);
        int i=n-1;
        
        while(i>=0){
            while(st.size() and st.top()<=arr[i]) st.pop();
            if(st.size()) v[i]=st.top();
            st.push(arr[i--]);
        }
        
        return v;
    }
};