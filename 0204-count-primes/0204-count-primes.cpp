class Solution {
public:
    int countPrimes(int n) {
        
        if (n <= 2) {
            return 0;
        }
        
        vector<bool> isPrime(n, true);
        
        isPrime[0] = false;
        isPrime[1] = false;
        
        for (int num = 2; num * num < n; num++) {
            
            if (isPrime[num]) {
                
                for (int m = num * num; m < n; m += num) {
                        isPrime[m] = false;
                }
            }
        }
        
        int count = 0;
        for (int num = 2; num < n; num++) {
            if (isPrime[num] == true) {
                count++;
            }
        }
        return count;
    }
};