class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {


        map<int, int> values;
        int diff;
       for (int i=0; i<nums.size(); i++)
        {
            diff = target - nums[i];
            if(values.find(diff) != values.end()){
                return {values[diff],i};
            }
            values[nums[i]] = i;
        }
    return {};
    
    }
};