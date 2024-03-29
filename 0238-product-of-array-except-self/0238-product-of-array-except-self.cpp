class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> res(n, 1);
        
        int pre = 1, post = 1;
        
        for (int i = 0; i < n; i++) {
            res[i] = pre;
            pre = pre * nums[i];
        }
        
        for (int i = n - 1; i >= 0; i--) {
            res[i] = post * res[i];
            post = nums[i] * post;
        }
        
        return res;
    }
};