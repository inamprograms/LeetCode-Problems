class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();

        set<int> rows;
        set<int> cols;

        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n; col++) {
                rows.insert(matrix[row][col]);
                cols.insert(matrix[col][row]);
            }
            if (rows.size() != n || cols.size() != n) {
                return false;
            }
            rows = {};
            cols = {};
        }

        return true;

        
    }
};