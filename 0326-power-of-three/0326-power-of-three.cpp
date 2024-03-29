class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) {
            return false;
        }
        return check(n);
    }
    
    bool check(int n) {
        
        if (n == 1) {
            return true;
        }
        
        if (n % 3 > 0) {
            return false;
        }
        
        return check(n/3);
    }
};