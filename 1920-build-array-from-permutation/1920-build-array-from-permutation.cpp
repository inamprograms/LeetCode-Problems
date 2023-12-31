class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int len = nums.size();
        int i = 0;
        while (i < len) {
            nums[i] = nums[i] + (len * (nums[nums[i]] % len));
            i++;
        }
        
        i = 0;
        while (i < len) {
            nums[i] /= len;
            i++;
        }
        return nums;
    }
    
};

