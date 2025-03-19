class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int n = nums.size() - 3;

        for (int first = 0; first <= n; first++) {
            
            if (first > 0 && nums[first] == nums[first - 1]) continue;
            int second = first + 1, third = n + 2;
            
            while (second < third) {
                int threeSum = nums[first] + nums[second] + nums[third];
                if (threeSum == 0) {

                    res.push_back({nums[first], nums[second], nums[third]});
                    second++;

                    while (nums[second] == nums[second - 1] && second < third) second++;
                } else if (threeSum > 0) third--;
                else second++;  
            }
        }
    
        return res;
    }
};