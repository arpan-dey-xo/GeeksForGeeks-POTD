class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i - 1]) {
                arr[i - 1] *= 2;
                arr[i] = 0;
            }
        }
        int j = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != 0) {
                swap(arr[i], arr[j]);
            j++;
            }
        }
        return arr;
    }
};