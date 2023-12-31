class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int count = 0;
        
        for (int n: nums) {
            count += (n % 2) == 0;
        }
        
        return count >= 2;
    }
};