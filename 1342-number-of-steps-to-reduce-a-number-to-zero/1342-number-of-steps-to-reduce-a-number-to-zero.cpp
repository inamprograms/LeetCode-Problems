class Solution {
public:
    int numberOfSteps(int num) {
        
        return countSteps(num, 0);
    }
    
    int countSteps(int n, int count) {
        
        
        if (n == 0) {
            return count;
        }
        
        count++;
        if (n % 2 == 0) {
            return countSteps(n / 2, count);
        } 
        
        return countSteps(n - 1, count);
    }
};