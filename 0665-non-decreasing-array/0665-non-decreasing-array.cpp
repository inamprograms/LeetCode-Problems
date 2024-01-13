class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        bool checked = false;
        
        for (int i = 0; i < nums.size() - 1; i++) {
            
            if (nums[i] <= nums[i + 1]) {
                continue;
            }
            
            if (checked) {
                return false;
            }
            
            if (i == 0 || nums[i + 1] >= nums[i - 1]) {
                nums[i] = nums[i + 1];
            } else {
                nums[i + 1] = nums[i];
            }
            checked = true;
        }
        
        return true;
        
    }
};