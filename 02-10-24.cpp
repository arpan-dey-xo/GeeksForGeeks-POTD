class Solution {
  public:
    int rotateDelete(vector<int> &arr) {
        int n = arr.size(), temp = n/2;
        int i = 3*(temp/2);
        if(temp%2)i++;
        return arr[n-i];
    }
};