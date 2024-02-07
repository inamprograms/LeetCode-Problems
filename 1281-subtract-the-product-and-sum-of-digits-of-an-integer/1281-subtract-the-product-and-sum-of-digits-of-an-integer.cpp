class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, product = 1;
        
        while (n != 0) {
            int remain = n % 10;
            
            sum += remain;
            product *= remain;
            
            n /= 10;
        }
        
        return product - sum;
    }
};