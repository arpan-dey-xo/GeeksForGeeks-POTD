class Solution {
  public:
    long long findNth(long long n) {
        long long res = 0;
        int pow = 1;
        int rem;
        
        while (n > 0) {
            rem = n % 9;
            n /= 9;
            
            res += rem * pow;
            pow *= 10;
        }
        
        return res;
    }
};