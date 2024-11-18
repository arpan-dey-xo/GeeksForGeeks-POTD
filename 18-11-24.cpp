class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        int size = arr.size();
        if (d == 0) return;
        d %= size;
        reverse(arr.begin(), arr.begin()+d);
        reverse(arr.begin()+d, arr.end());
        reverse(arr.begin(), arr.end());
    }
};