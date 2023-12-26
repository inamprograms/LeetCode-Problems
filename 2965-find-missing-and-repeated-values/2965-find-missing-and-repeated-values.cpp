class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> freq(grid.size()*grid.size(), 0);
        vector<int> ans(2,1);
        
        for (int row = 0; row < grid.size(); row++) {
            for (int col = 0; col < grid[row].size(); col++) {
                int n = grid[row][col];
                freq[n-1]++;
            }
        }
     
        for (int i = 0; i < freq.size(); i++) {
            if (freq[i] == 2) {
                ans[0] = i + 1;
            }
            
            if (freq[i] == 0) {
                ans[1] = i + 1;
            }
        }
        
        return ans;
    }
};









