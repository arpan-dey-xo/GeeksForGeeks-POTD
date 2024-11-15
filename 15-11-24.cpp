class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        if (n < 2) {
            return -1;
        }
        int lar = arr[0];
        int sec_lar = -1;
        for (int i = 1; i < n; i++) {
            if (arr[i] > lar) {
                sec_lar = lar;
                lar = arr[i];
            }
            else if (arr[i] < lar && arr[i] > sec_lar) {
                sec_lar = arr[i];
            }
        }
        return sec_lar;
    }
};