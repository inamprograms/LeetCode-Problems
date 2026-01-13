class Solution {
public:
    bool isPowerOfTwo(int n) {

        if (n <= 0) return false;
        
        // while (n != 1) {
        //     if ((n & 1 )== 1) return false;
        //     n = n >> 1;
        // }
        // return true;

        // return n > 0 && (n & (n - 1)) == 0;


        int count = 0;
        while (n) {
            if (count > 0) {
                return false;
            }
            if (n % 2 == 1) count++;
            n /= 2;
        }
        return true;
       
    }
};