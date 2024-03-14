class Solution {
public:

    int reverse(int x) {
        if (x == 0) {
            return 0;
        }
        long int num = rev(x);
        
        if(num < pow(-2, 31) || num > pow(2, 31)-1)
            return 0;
        
        return num;
    }
    
    long int rev(int n) {
        int digits;
        if (n < 0) {
            long int temp = n;
            temp = -1 * temp;
            digits = log10(temp) + 1;
        } else {
            digits = log10(n) + 1;
        }
        
        // int digits =  digits = log10(n) + 1;
       
       return helper(n, digits);
    }
    
    long int helper(int n, int digits) {
        // if n is one digit number
        // if(n%10 == 0) {
        //     return n;
        // }
        
        if (n == 0) {
            return 0;
        }
        
        int rem = n % 10;
        return rem * pow(10, digits-1) + helper(n / 10, digits-1);
    }
};