class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;

        while (n > 1) {
            if ((n & 3) != 0) return false; // not divisible by 4
            n = n >> 2;  // divide by 4
        }
        return true;

    
        // int base = 4;
        // double res = log(n) / log(base);
        // if (floor(res) == res) return true;
        // return false;

        // return (n & (n - 1)) == 0 && (n % 3) == 1;

        if ((n & (n - 1)) != 0) return false;
        // the single 1 bit must be at even position
        return (n & 0x55555555) != 0;
    }
    
    
};