class Solution {
    public:
      int getMaxArea(vector<int> &arr) {
          int l = arr.size();
          int area = 0;
          stack<int> st;
  
          for (int i = 0; i < l; i++) {
              while (!st.empty() && arr[st.top()] > arr[i]) {
                  int height = arr[st.top()];
                  st.pop();
                  int width = (st.empty()) ? i : i - st.top() - 1;
                  area = max(area, height * width);
              }  
              st.push(i);
          }
          
          while (!st.empty()) {
              int height = arr[st.top()];
              st.pop();
              int width = (st.empty()) ? l : l - st.top() - 1;
              area = max(area, height * width);
          }
  
          return area;
      }
  };