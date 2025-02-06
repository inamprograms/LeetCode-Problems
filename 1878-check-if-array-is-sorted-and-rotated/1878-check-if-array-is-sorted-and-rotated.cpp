class Solution {
public:
    bool check(vector<int>& nums) {
        bool flag = true;
        int peakPos = -1;
        int n = nums.size();
        // if (nums[0] > nums[1]) return false;
        for (int i = 0; i < n - 1; i++) {
            
            if (nums[i] <= nums[i + 1]) {
                continue;
            }
            peakPos = i;
            break;
        }
        if (peakPos == -1) return true;
        for (int i = peakPos + 1; i < n - 1; i++) {
            if (nums[i] <= nums[i + 1]) {
                continue;
            }
           
            return !flag;
        }

        if (nums[n - 1] <= nums[0]) {
            flag = true;
        } else {
            flag = false;
        }
        return flag;
    }
};