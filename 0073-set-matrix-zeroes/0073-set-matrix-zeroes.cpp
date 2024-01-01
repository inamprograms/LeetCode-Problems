class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> zeros;
        
        for (int row = 0; row < matrix.size(); row++) {
            for (int col = 0; col < matrix[row].size(); col++) {
                if (matrix[row][col] == 0) {
                    zeros.push_back({row, col});
                } 
            }
        }
        
        for (auto z: zeros) {
            int row = z.first, col = z.second;
            
            //set zeros to right
            while (col < matrix[row].size()) {
                matrix[row][col] = 0;
                col++;
            }
            row = z.first, col = z.second;
            //set zeros to down
            while (row < matrix.size()) {
                matrix[row][col] = 0;
                row++;
            }
            
            row = z.first, col = z.second;
            // set zeros to upward
            while (row >= 0) {
                matrix[row][col] = 0;
                row--;
            }
            
            row = z.first, col = z.second;
            // set zeros to left
            while (col > -1) {
                matrix[row][col] = 0;
                col--;
            }
        }
    }
};