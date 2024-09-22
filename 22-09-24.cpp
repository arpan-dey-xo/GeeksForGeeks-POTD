class Solution {
  public:
    int lps(string str) {
        int i = 1, j = 0, n = str.length();
        vector<int> storeLength(n,0);
        while(i<n) {
            if(str[i] == str[j])storeLength[i++] = ++j;
            else {
                if(j > 0) j = storeLength[j-1];
                else i++;
            }
        }
        return storeLength[n-1];
    }
};