class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();

        set<int> nums;
        for (auto row: matrix) {
            for (auto num: row) {
                nums.insert(num);
            }

            if (nums.size() != n) {
                return false;
            }
            nums = {};
        }

        for (int col = 0; col < n; col++) {
            for (int row = 0; row < n; row++) {
                nums.insert(matrix[row][col]);
            }
            if (nums.size() != n) {
                return false;
            }
            nums = {};
        }

        return true;

        
    }
};