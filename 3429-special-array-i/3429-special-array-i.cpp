class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if (nums.size() < 2) return true;

        bool first = nums[0] % 2 == 0;

        for (int i = 1; i < nums.size(); i++) {
            bool second = nums[i] % 2 == 0;

            if ((first && !second) || (!first && second)) {
                first = second;
                continue;
            }
           return false;
        }
        return true;
    }
};