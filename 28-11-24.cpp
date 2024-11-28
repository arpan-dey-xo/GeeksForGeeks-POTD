class Solution {
  public:
    int myAtoi(char *s) {
        long long ans = 0;
        bool isNeg = false;
        int i = 0;
        
        while (s[i] == ' ') i++;
        if (s[i] == '-') isNeg = true, i++;
        else if (s[i] == '+') i++;
        
        
        while (s[i] >= '0' && s[i] <= '9') {
            int num = s[i] - '0';
            ans = ans*10 + num;
            
            if (ans > INT_MAX && !isNeg) return INT_MAX;
            else if (ans > INT_MAX && isNeg) return INT_MIN;
            i++;
        }
        
        if (isNeg) return -1 * ans;
        else return ans;
    }
};