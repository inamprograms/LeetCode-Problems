class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size()-1, mid;

        while (start <= end) {
            mid = start + (end - start) / 2;

            if(mid < nums.size()-1 && nums[mid] > nums[mid+1]) {
                return nums[mid+1];
            } else if (mid > 0 && nums[mid] < nums[mid - 1]) {
                return nums[mid];
            } else if (mid == nums.size()-1) {
                return nums[0];
            } else if (nums[mid] >= nums[start]) {
                start = mid + 1;
            } else {
                end = mid -1;
            }
        } 
        return -1;
    }
};

//  else if (mid < nums.size()-1 && nums[mid] < nums[mid+1] && mid+1 == nums.size()-1) {
                // cout << mid << " " <<  nums.size()-1 << " "<<endl;
                // return nums[mid % nums.size()];
            // }