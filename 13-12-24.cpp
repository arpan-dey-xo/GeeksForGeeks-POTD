class Solution {
  public:
    int findMin(vector<int>& arr) {
        set<int> y;
        for (int i = 0; i < arr.size(); i++) {
             y.insert(arr[i]);
        }
        return *y.begin();
    }
};