class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int res = 0;
        
        int l = 0;
        for (int r = 0; r < nums.size(); r++) {
            
            freq[nums[r]]++;
            
            if (freq[nums[r]] > k) {
              
                while (nums[l] != nums[r]) {
                    freq[nums[l]]--;
                    l++;
                }
                
                freq[nums[l]]--; 
                l++;
            }
            
            res = max(res, r - l + 1);
        }
        
        return res;
    }
};