class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() < 2) return 1;
        int k = 2;
        for (int i = k; i < nums.size(); i++) {
            if (nums[k - 2] == nums[i]) continue;
            nums[k] = nums[i];
            k++;
        }

        return k;
    }
};