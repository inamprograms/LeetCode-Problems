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
        
        for (int i = 0; i < r * c; i++) {
              res[i / c][i % c] = mat[i / cols][i % cols];
        }
        
      
        return res;
    }
};