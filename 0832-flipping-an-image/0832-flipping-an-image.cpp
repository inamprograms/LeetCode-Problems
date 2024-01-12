class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        for (int row = 0; row < image.size(); row++) {
            
            int left = 0, right = image[0].size() -1;
            
            while (left <= right) {
                int temp = image[row][left];
                image[row][left] = !image[row][right];
                image[row][right] = !temp;
                
                left++;
                right--;
            }
            
//             for (int col = 0; col < image[0].size(); col++) {
                
//                 if (image[row][col] == 0) {
//                     image[row][col] = 1;
//                 } else {
//                     image[row][col] = 0;
//                 }
//             }
            
        
            
        }
        return image;
    }
};