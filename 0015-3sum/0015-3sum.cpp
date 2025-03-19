class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> set; 
        int n = nums.size() - 3;
        for (int first = 0; first <= n; first++) {
            int second = first + 1, third = n + 2;

            while (second < third) {
                int threeSum = nums[first] + nums[second] + nums[third];
                if (threeSum == 0) {

                    set.insert({nums[first], nums[second], nums[third]});
                    second++;
                    third--;
                    continue;
                }

                if (threeSum > 0) third--;
                else second++;  
            }
        }
        vector<vector<int>> res;

        for (auto vec: set) {
            res.push_back(vec);
        }
        return res;
    }
};