class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int count = 0;
        
        for (int n: nums) {
            count += !(n & 1);
        }
        
        return count >= 2;
    }
};