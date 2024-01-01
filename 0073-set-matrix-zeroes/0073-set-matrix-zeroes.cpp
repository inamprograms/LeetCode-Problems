class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       
        int rows = matrix.size(), cols = matrix[0].size();
        bool rowZero = false;
        
        // finding which row or column need to be zero
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                
                if (matrix[r][c] == 0) {
                    
                    matrix[0][c] = 0;
                    
                    if (r > 0) {
                        matrix[r][0] = 0;
                    } else {
                        rowZero = true;
                    }
                    
                }
            }
        }
        
        // set the zeros
        
        for (int r = 1; r < rows; r++) {
            for (int c = 1; c < cols; c++) {
                
                // set cur element to zero if first row of cur column is 0 or if first col of cur row is 0
                if (matrix[0][c] == 0 || matrix[r][0] == 0) {
                    matrix[r][c] = 0;
                }
            }
        }
        
        // set first col zero if matrix[0][0] == 0
        if (matrix[0][0] == 0) {
            for (int r = 0; r < rows; r++) {
                matrix[r][0] = 0;
            }
        }
        
        // set first row zero if rowZeros = true
        if (rowZero) {
            for (int c = 0; c < cols; c++) {
                matrix[0][c] = 0;
            }
        }
    }
};