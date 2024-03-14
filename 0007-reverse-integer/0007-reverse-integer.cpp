class Solution {
public:
    long int num = 0;
    int reverse(int x) {
        
        rev(x);
        
        if(num < pow(-2, 31) || num > pow(2, 31)-1)
            return 0;
        
        return num;
    }
    
    void rev(int n) {
        
        if (n == 0) {
            return;
        }
        long int rem = n % 10;
        num = num * 10 + rem;
        
        rev(n / 10);
    }
};