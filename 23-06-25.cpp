class Solution {
  public:
    string addStrings(string num1, string num2) {
        string result;
        int i = num1.size() - 1, j = num2.size() - 1, carry = 0;
        
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += num1[i--] - '0';
            if (j >= 0) sum += num2[j--] - '0';
            carry = sum / 10;
            result += (sum % 10) + '0';
        }
        reverse(result.begin(), result.end());
        return result;
    }

    string minSum(vector<int> &arr) {
        sort(arr.begin(), arr.end());
        string a = "", b = "";
        
        for (int i = 0; i < arr.size(); i++) {
            if(arr[i] == 0){
                continue;
            }
            if (i % 2 == 0) a += to_string(arr[i]);
            else b += to_string(arr[i]);
        }

        return addStrings(a, b);
    }
};