class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k  = k % n;
        vector<int> temp;
     
        int end = n - 1;
        int it = 1;
        while (it <= k) {
            temp.push_back(nums[end]);
            end--;
            it++;
        }
        
        it = n - k - 1;
        for (int i = it; i >= 0; i--) {
            nums[i + k] = nums[i];
        }
        
        for (int i = 1; i <= k; i++) {
            
            nums[k - i] = temp[i - 1];
        }
    }
};