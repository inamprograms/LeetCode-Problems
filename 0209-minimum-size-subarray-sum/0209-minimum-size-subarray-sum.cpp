class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, right = 0;
        int sum = 0, len = INT_MAX;
        while (right < nums.size() ) {
            
            sum += nums[right];
            while (sum >= target) {
                
                if (right - left + 1 < len) {
                    len = right - left + 1;
                }
                sum -= nums[left];
                left++;
            }
            right++;   
        }
        return (len == INT_MAX) ? 0 : len;
    }
};