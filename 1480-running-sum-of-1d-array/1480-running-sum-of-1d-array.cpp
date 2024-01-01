class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int sum = 0; 
        for (int num = 1; num < nums.size(); num++) {
            nums[num] = nums[num] + nums[num - 1];
        }
        
        return nums;
    }
};