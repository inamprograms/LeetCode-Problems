class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long res = 0, count = 0;
        int max_num = *max_element(nums.begin(), nums.end());
        int l = 0;
        for (int r = 0; r < nums.size(); r++) {
           
            if (nums[r] == max_num) {
                count++;
            }
           
            while (count > k || (l <= r && count == k && nums[l] != max_num)) {
              
                if (nums[l] == max_num) {
                    count--;
                }
                l++;
            }
            
            if (count == k) {
                res += l + 1;
            }
        }
        return res;
    }
};