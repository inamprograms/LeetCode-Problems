class Solution {
public:
    bool isPowerOfFour(int n) {
        // if (n <= 0) return false;
        // while (n != 1) {
        //     if ((n & 4 ) > 0) return false;

        //     n = n >> 4;

        // }
        // return true;

        if (n <= 0) return false;
        int base = 4;
        double res = log(n) / log(base);
        if (floor(res) == res) return true;
        return false;
    }
    
    
};