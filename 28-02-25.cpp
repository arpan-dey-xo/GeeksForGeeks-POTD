class Solution {
    public:
      bool isOperator(string s) {
          return s == "+" || s == "-" || s == "*" || s == "/";
      }
      
      int evaluate(vector<string>& arr) {
          stack<int> st;
          
          for (string s : arr) {
              if (isOperator(s)) {
                  int b = st.top(); st.pop();
                  int a = st.top(); st.pop();
                  
                  if (s == "+") st.push(a + b);
                  if (s == "-") st.push(a - b);
                  if (s == "*") st.push(a * b);
                  if (s == "/") st.push(a / b); 
              } 
              else {
                  st.push(stoi(s));
              }
          }
          
          return st.top();
      }
  };