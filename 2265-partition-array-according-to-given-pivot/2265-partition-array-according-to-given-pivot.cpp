class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> result(n, 0);
        vector<int> middle;
        vector<int> larger;
        int it = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] < pivot) {
                result[it] = nums[i];
                it++;
            } else if (nums[i] > pivot) larger.push_back(nums[i]);
            else middle.push_back(nums[i]);
        }

        for (int i = 0; i < middle.size(); i++) {
            result[it] = middle[i];
            it++;
        }
        for (int i = 0; i < larger.size(); i++) {
            result[it] = larger[i];
            it++;
        }
        return result;
    }
};