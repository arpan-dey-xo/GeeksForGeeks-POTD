class Solution {
  public:
    string countAndSay(int n) {
        string s1="1";
        while(--n) {
            int l=s1.length(), c=1;
            string s2="";
            for(int i=1; i<=l; i++) {
               if(s1[i] != s1[i-1]) {
                   s2+= (c + '0');
                   s2+=s1[i-1];
                   c=1;
               }
               else {
                   c++;
               }
            }
            s1=s2;
        }
        return s1;
    }
};