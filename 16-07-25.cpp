class Solution {
  public:
    int countNumbers(long long n) {
        int max_prime = sqrt(n) + 1;
        vector<bool> is_prime(max_prime + 1, true);
        is_prime[0] = is_prime[1] = false;
        for (int i = 2; i * i <= max_prime; i++) {
            if (is_prime[i]) {
                for (int j = i * i; j <= max_prime; j += i) {
                    is_prime[j] = false;
                }
            }
        }
        vector<int> primes;
        for (int i = 2; i <= max_prime; i++) {
            if (is_prime[i]) primes.push_back(i);
        }
        
        int count = 0;
        for (int p : primes) {
            long long p8 = 1LL * p * p * p * p * p * p * p * p;
            if (p8 > n) break;
            count++;
        }
        for (int i = 0; i < primes.size(); i++) {
            int p = primes[i];
            long long p2 = 1LL * p * p;
            if (p2 > n) break;
            long long max_q2 = n / p2;
            int max_q = sqrt(max_q2);
            auto it = upper_bound(primes.begin() + i + 1, primes.end(), max_q);
            count += distance(primes.begin() + i + 1, it);
        }
        
        return count;
    }
};