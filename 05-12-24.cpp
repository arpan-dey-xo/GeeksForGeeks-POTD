class Solution {
  public:
    void sort012(vector<int>& arr) {
        int n = arr.size(), zero = 0, two = n-1, i = 0;
        while(i<=two){
            if(arr[i]==0){
                swap(arr[zero],arr[i]);
                zero++;
            }
            else if(arr[i]==2){
                swap(arr[i],arr[two]);
                two--;
                i--;
            }
            i++;
        }
    }
};