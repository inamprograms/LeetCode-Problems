class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> res;
    
        bool isLucky = true;
        
        for (int r = 0; r < matrix.size();  r++) {
            int col = 0;
            isLucky = true;
            int smallest = matrix[r][0];
            for (int c = 1; c < matrix[0].size(); c++) {
                if (smallest > matrix[r][c]) {
                    smallest = matrix[r][c];
                    col = c;
                }
            }
            
            int luckyNum = matrix[r][col];
            cout << luckyNum << " ";
            int row = 0;
            while (row < matrix.size()) {
                if (r == row || luckyNum > matrix[row][col]) {
                    row++;
                    continue;
                }
                isLucky = false;
                break;
            }
            if (isLucky) {
                res.push_back(luckyNum);
            }
           
        }
        return res;
     
    }
};