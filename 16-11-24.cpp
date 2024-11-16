class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int st = 0;
        int size = arr.size();
        for (int i = 0; i < size; i++) {
            if (arr[i] != 0){
                int t = arr[i];
                arr[i] = arr[st];
                arr[st] = t;
                st++;
            }
        }
    }
};