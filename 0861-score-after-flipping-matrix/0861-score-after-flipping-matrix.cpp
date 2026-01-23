class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        // Visit row wise and flip the row if its MSB is 0 to make current row number larger
        for (int r = 0; r < rows; r++) {
            if (grid[r][0] == 0) {
                // Toggle the row elements
                for (int c = 0; c < cols; c++) {
                    grid[r][c] = grid[r][c] ^ 1;
                }
            }
        }

        // Visit the columns and see if count of zeros in columns is more than 1 then flip the whole columns to make number greater
        for (int c = 0; c < cols; c++){
            int count_zeros = 0, count_ones = 0;
            for (int r = 0; r < rows; r++) {
                if (grid[r][c] == 0) count_zeros++; else count_ones++;
            }

            if (count_zeros > count_ones) {
                // Flip the columns
                for (int r = 0; r < rows; r++) {
                    grid[r][c] = grid[r][c] ^ 1;
                }
            }
        }
        
        // Build number form each row and return max result
        int res = 0;
        for (vector<int> row: grid) {
            int num = 0;
            for (int c = 0; c < cols; c++) { 
               num |= row[c] << (cols - c - 1);
            }
            res += num;
        }
        return res;
    }
};