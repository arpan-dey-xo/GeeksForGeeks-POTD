class Solution {
  public:
    int pairsum(vector<int> &arr) {
        int largest = INT_MIN, secondLargest = INT_MIN;
        for(int x:arr){
            if(x>largest){
                secondLargest=largest;
                largest=x;
            }
            else if(x>secondLargest)secondLargest=x;
        }
        return largest+secondLargest;
    }
};