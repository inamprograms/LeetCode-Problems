class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> res;
        
        int left = cStart, top = rStart;
        int right = cStart + 1, bottom = rStart + 1;
        
       for (int j = 0; j < rows * cols; ++j)  {
            
            // fill from left to right 
            if (top > -1) {
                
                for (int r = left; r < right; r++) {
                    res.push_back({top, r});
                }
                top--;
            }
            
            // fill from top to buttom
            if (right < cols) {
                
                for (int c = top+1; c < bottom; c++) {
                    res.push_back({c, right});
                }
                right++;
            }
               
            // fill from right to left
            if (bottom < rows) {
                
                for (int r = right - 1; r >= left; r--) {
                    res.push_back({bottom , r});
                }
                bottom++;
            }
                
            // fill from buttom to top
            if (left > 0) { 
                
                for (int c = bottom - 1; c > top; c--) {
                    res.push_back({c, left-1});
                }
                left--;
            }
        }
        
        return res;
    }
};