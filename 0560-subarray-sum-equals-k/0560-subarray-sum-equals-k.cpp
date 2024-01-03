class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int count = 0, curSum = 0;
        unordered_map<int, int> prefixSum;
        prefixSum[0] = 1;
        
        for (int i = 0; i < nums.size(); i++) {
            
            curSum += nums[i];
            
            int diff = curSum - k;
            // if (prefixSum.find(diff) != prefixSum.end()) {
                count += prefixSum[diff];
            // }
            
            prefixSum[curSum]++;
            
            
        }
        
        return count;
    }
};