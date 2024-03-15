class Solution {
public:
    bool isPalindrome(int x) {
        if (x == 0) {
            return true;
        }
        if (x < 0) {
            return false;
        }
        return x == rev(x);
    }
    
    
    long int rev(int n) {

                
        int digits = log10(n) + 1;
        


        return helper(n, digits);
    }

    long int helper(int n, int digits) {


        if (n == 0) {
            return 0;
        }

        int rem = n % 10;
        return rem * pow(10, digits-1) + helper(n / 10, digits-1);
    }
};