class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans(nums.size(), 0); 
        int sum = 0; 
        for (int num = 0; num < nums.size(); num++) {
            
            sum += nums[num];
            
            ans[num] = sum;
        }
        
        return ans;
    }
};