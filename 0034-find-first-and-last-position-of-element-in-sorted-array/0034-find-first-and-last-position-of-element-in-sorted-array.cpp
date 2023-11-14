class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res = {-1, -1};
        bool findStartIndex;
        res[0] = search(nums, target, true);
        if (res[0] != -1) {
            res[1] = search(nums, target, false);
        }
        return res;
    }

    int search(vector<int> nums, int target, bool findStartIndex) {
        int ans = -1;
        int start = 0; 
        int end = nums.size() - 1;
        while (start <= end) {

            int mid = start + (end - start) / 2;
            if (target < nums[mid]){
                end = mid - 1;
            } else if (target > nums[mid]) {
                start = mid + 1;
            } else {
                ans = mid;
                if(findStartIndex) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
        }

        return ans;
    }
};