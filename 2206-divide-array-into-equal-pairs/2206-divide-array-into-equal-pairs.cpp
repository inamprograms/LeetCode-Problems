class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int nPairs = nums.size() / 2;
        int count = 0;
        
        int first = 0, second = 1;
        while (second < nums.size()) {
            if (nums[first] == nums[second]) {
                count++;
                second += 2;
                first += 2;
            } else {
                first++;
                second++;
            }
        }
        
        if (count == nPairs) {
            return true;
        }
        
        return false;
    }
};


    
    