class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            
            if (even(nums[i])) {
                res++;
            }
        }
        
        return res;
    }
    
    
    bool even(int num) {
        int count = 0;
        while (num > 0) {
            count++;
            num /= 10;
        }
        
        if (count % 2 == 0) {
            return true;
        }
        
        return false;
    }
};