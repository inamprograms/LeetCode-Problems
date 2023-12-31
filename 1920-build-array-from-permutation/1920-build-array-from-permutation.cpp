class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int len = nums.size();
        
        vector<int> ans(len);
        
        int i = 0;
        while (i < len) {
            
            int num = nums[i];
            int val = nums[num];
            ans[i] = val;
            
            i++;
        }
        return ans;
    }
    
};