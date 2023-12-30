class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
       vector<vector<int>> matrix(n, vector<int>(n, 0));
   
        int start = 1;
        int left = 0, right = n; 
        int top = 0, buttom = n;
        
          while (left < right || top < buttom) {
            
                for (int i = left; i < right; i++) {
                    matrix[top][i] = start;
                    start++;
                }
                top++;
                
                for (int i = top; i < buttom; i++) {
                    matrix[i][right - 1] = start;
                    start++;
                }
                right--;
                
                for (int i = right - 1; i >= left; i--) { 
                    matrix[buttom - 1][i] = start;
                    start++;
                }
                buttom--;
            
                for (int i = buttom - 1; i >= top; i--) {
                    matrix[i][left] = start;
                    start++;
                }
                left++;
        }
        return matrix;
    }
};