class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
       vector<vector<int>> matrix(n, vector<int>(n, 0));
    //     for (int i = 0; i < n; ++i) {
    //     for (int j = 0; j < n; ++j) {
    //         std::cout << matrix[i][j] << " ";
    //     }
    //     std::cout << std::endl;
    // }
        int start = 1;
        int left = 0, right = n - 1; 
        int top = 0, buttom = n - 1;
        
        while (left <= right) {
            
            // fill from left to right/ top row
            for (int c = left; c <= right; c++) {
                matrix[top][c] = start;
                start++;
            }
            top++;
            
            // fill from top to buttom / right col
            for (int r = top; r <= buttom; r++) {
                matrix[r][right] = start;
                start++;
            }
            right--;
            
            // fill from right to left / buttom row
            for (int c = right; c >= left; c--) {
                matrix[buttom][c] = start;
                start++;
            }
            buttom--;
            
            // fill from buttom to top / left col
            for (int r = buttom; r >= top; r--) {
                matrix[r][left] = start;
                start++;
            }
            left++;

        }
        return matrix;
    }
};