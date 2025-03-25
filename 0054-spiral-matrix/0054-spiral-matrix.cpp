class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        int size = rows * cols;
        vector<int> res;
        int r = 0;
        int c = 0;
        int it = 0;
        
        while (res.size() < rows * cols) {
        
            for (int col = c; col < cols - it && res.size() < size; col++) {
                res.push_back(matrix[r][col]);
                c = col;
            }
        
            for (int row = r + 1; row < rows - it && res.size() < size; row++) {
                res.push_back(matrix[row][c]);
                r = row;
            }

            for (int col = c - 1; col >= it && res.size() < size; col--) {
                res.push_back(matrix[r][col]);
                c = col;
            }
            
            for (int row = r - 1; row > it && res.size() < size; row--) {
                res.push_back(matrix[row][c]);
                r = row;
            }

            c = c + 1;
            it = it + 1;

        }

        return res;
        
    }
};