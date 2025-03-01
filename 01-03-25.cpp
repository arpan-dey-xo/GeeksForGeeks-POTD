class Solution {
    public:
      string decodedString(string &s) {
          string ans;
          int n=s.size();
          stack<char>st;
          for(char c:s)
          {
              if(c!=']')
                  st.push(c);
              else
              {
                  string temp="";
                  while(!st.empty() && st.top()!='['){
                      temp=st.top()+temp;
                      st.pop();
                  }
                  st.pop();
                  string k="";
                  while(!st.empty() && isdigit(st.top()))
                  {
                      k=st.top()+k;
                      st.pop();
                  }
                  int count=stoi(k);
                  string repeat="";
                  while(count--)
                      repeat+=temp;
                  
                  for(char i:repeat)
                      st.push(i);
              }
          }
          while(!st.empty())
          {
              ans=st.top()+ans;
              st.pop();
          }
          return ans;
      }
  };