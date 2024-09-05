class Solution {
  public:

    int missingNumber(int n, vector<int>& arr) {

        int sum = 0;
        for (int i = 0; i < n - 1; i++) {
            sum += arr[i];
        }
        return (n*(n+1))/2 - sum;
    }
};