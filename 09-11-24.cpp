class Solution {
  public:
    string minSum(vector<int> &arr) {
        int sum = 0;
        int carry = 0;
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int i = n-1, j = n-2;
        string ans = "";
        while (j >=0 || i >= 0) {
            int temp = carry;
            if (i >= 0) temp += arr[i];
            if (j >= 0) temp += arr[j];
            i -= 2;
            j -= 2;
            ans.push_back(char('0' + temp%10));
            carry = temp/10; 
        }
        if (carry != 0) ans.push_back(char('0' + carry));
        while (ans.size() && ans.back() == '0') ans.pop_back();
        reverse(ans.begin(), ans.end());
        return ans;
    }
};