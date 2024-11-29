class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        string ans = "";
        char curr;
        int carry = 0, i = 0;
        while (carry > 0 || i < s1.length() || i < s2.length()) {
            int sum = carry;
            if (i < s1.length()) {
                if (s1[i] == '1') {
                    sum++;
                }
            }
            if (i < s2.length()) {
                if (s2[i] == '1') {
                    sum++;
                }
            }
            if (sum == 0) {
                carry = 0;
                curr = '0';
            }
            else if (sum == 1) {
                carry = 0;
                curr = '1';
            }
            else if (sum == 2) {
                carry = 1;
                curr = '0';
            }
            else {
                carry = 1;
                curr = '1';
            }
            ans.push_back(curr);
            i++;
        }
        reverse(ans.begin(), ans.end());
        int ind = 0;
        while (ind < ans.length()) {
            if (ans[ind] == '1') {
                break;
            }
            ind++;
        }
        return ans.substr(ind);
    }
};