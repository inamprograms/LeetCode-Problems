class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        return check(n);
    }
    
    
    bool check(int n) {
        if (n == 1) {
            return true;
        }
        
        if (n%2 == 1) {
            return false;
        }
        
        return check(n/2);
    }
};