class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> runningSum(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            runningSum[i] = sum;
        }
        return runningSum;

    }
};