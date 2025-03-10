class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0, nextLargestJump = 0, prevJump = 0;
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            nextLargestJump = max(nextLargestJump, nums[i] + i);

            if (i == prevJump) {
                jumps++;
                prevJump = nextLargestJump;

                if (prevJump == n - 1) break;
            }
        }
        return jumps;
    }
};
