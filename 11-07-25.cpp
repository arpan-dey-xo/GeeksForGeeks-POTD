class Solution {
  public:
    int countConsec(int n) {
        int total = (1 << n);
        int ways = 2;
        int last1 = 1;
        int last0 = 1;
        
        for(int i = 1; i < n; i++){
            ways = 2*last0 + last1;
            int temp = last0;
            last0 = last1 + last0;
            last1 = temp;
        }
        
        return total - ways;
    }
};