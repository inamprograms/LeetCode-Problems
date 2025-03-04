class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int goal = n - 1;
        for (int cur_pos = n - 2; cur_pos >= 0; cur_pos--) {
            if (cur_pos + nums[cur_pos] >= goal) goal = cur_pos;    
        }
        return goal == 0;
    }
};