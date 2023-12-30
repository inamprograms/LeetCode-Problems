class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> res;
        
        int left = 0, right = matrix[0].size();
        int top = 0, buttom = matrix.size();
        
        while (left < right && top < buttom) {
            
                for (int i = left; i < right; i++) {
                    res.push_back(matrix[top][i]);//left
                }
                top++;
                
                for (int i = top; i < buttom; i++) {
                    res.push_back(matrix[i][right - 1]);
                }
                right--;
                
                if (!(left < right && top < buttom)) {
                    break;
                }
            
                for (int i = right - 1; i >= left; i--) { 
                    res.push_back(matrix[buttom - 1][i]);
                }
                buttom--;
            
                for (int i = buttom - 1; i >= top; i--) {
                    res.push_back(matrix[i][left]);
                }
                left++;
        }
        return res;
    }
};

    
    
    
    