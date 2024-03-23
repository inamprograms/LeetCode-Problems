class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> set_values;
        for(int i=0; i<nums.size(); i++){
            if(set_values.count(nums[i]))
                return true;
            set_values.insert(nums[i]);
        }
        return false;
    }
};