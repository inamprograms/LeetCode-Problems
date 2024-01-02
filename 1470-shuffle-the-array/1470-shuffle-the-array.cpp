class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        
        int x = 0, y = n;
        
        while (x < n) {
            
            res.push_back(nums[x]);
            res.push_back(nums[y]);
            
            x++;
            y++;
        }
        
        return res;
    }
};