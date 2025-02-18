class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
     unordered_map<int, int> map;
        int dist = abs(nums[0]);
        map[dist] = 0;
        int min_dist = dist;
        for (int i = 1; i < nums.size(); i++) {
            dist = abs(nums[i]);

            if (dist < min_dist){ 
                map[dist] = i;
                min_dist = dist;
            } 
            if (dist == min_dist) {
                int val = nums[map[min_dist]];
                if (nums[i] > val) {
                    map[dist] = i;
                    min_dist = dist;
                }
            }
        }
       return nums[map[min_dist]];
       
    }
};