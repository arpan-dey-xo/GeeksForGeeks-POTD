class Solution {
    public:
      int maxLength(string str) {
          int mx = 0, op = 0, cl = 0, mx2 = 0;
          for(int i=0;i<str.length();i++){
              if(str[i]=='(')op++;
              else cl++;
              if(cl>op)cl=op=0;
              else if(cl==op)mx=max(mx,op*2);
          }
          op=cl=0;
          for(int i=str.length()-1;i>=0;i--){
              if(str[i]=='(')op++;
              else cl++;
              if(op>cl)op=cl=0;
              else if(op==cl)mx2=max(mx2,op*2);
          }
          return max(mx, mx2);
      }
  };