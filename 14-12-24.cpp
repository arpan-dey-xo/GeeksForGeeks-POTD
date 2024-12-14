class Solution {
  public:int search(vector<int>& arr, int key) {
        int low = 0, high = arr.size() - 1, mid;
        while (low <= high) {
            mid = (low + high)/2;
            if (arr[mid] == key) return mid;
            else if (arr[mid] < arr[0]) {
                if (key > arr[mid] && key <= arr[high]) low = mid + 1;
                else high = mid - 1;
            }
            else {
                if (key < arr[mid] && key >= arr[low]) high = mid - 1;
                else low = mid + 1;
            }
        }
        return -1;
    }
    
};