class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        int y = n;
        // storing x into y as pair
        while (y < 2 *n) {
            
            nums[y] = (nums[y] * 1024) + nums[y - n];
           
            y++;
            
        }
        
        
        // shuffling the array
        y = n;
        int idx = 0;
        while (y < 2*n) {
            
            int xnum = nums[y] % 1024;
            int ynum = nums[y] / 1024;
             
            nums[idx] = xnum;
            nums[idx + 1] = ynum;
            
            y++;
            idx += 2;
        }
        return nums;
    }
};