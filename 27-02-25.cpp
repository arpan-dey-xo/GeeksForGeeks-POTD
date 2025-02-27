class Solution {
    public:
      stack<pair<int,int>>st;
      int ele=INT_MAX;
  
      void push(int x) {
          ele=min(ele,x);
          st.push({x,ele});
      }
  
      void pop() {
          if(!st.empty())
          st.pop();
          if(!st.empty()) {
              ele=st.top().second;
          }
          else {
              ele=INT_MAX;
          }
      }
  
      int peek() {
          if(!st.empty())
          return st.top().first;
          else
          return -1;
      }
  
      int getMin() {
          if(!st.empty())
          return st.top().second;
          else
          return -1;
      }
  };