class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows = mat.size();
        int cols = mat[0].size();
        
        vector<int>temp;
        vector<vector<int>> res(r, vector<int>(c, 0));
        
        if (rows * cols != r * c) {
            return mat;
        }
        
        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                temp.push_back(mat[row][col]);
            }
        }
        
        int k = 0;
        for (int row = 0; row < r; row++) {
            for (int col = 0; col < c; col++ ){
                res[row][col] = temp[k];
                k++;
            }
        }
        return res;
    }
};