class Solution {
public:

    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        set<pair<int,int>> landRegion;
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c] == 1) landRegion.insert({r,c});
            }
        }

        int output = 0;
        for (auto land : landRegion) {
            int r = land.first, c = land.second;
            output += 4;
            vector<pair<int, int>> neighbors = {{r - 1, c}, {r + 1, c}, {r, c - 1}, {r, c + 1}};
            for (auto neighbor : neighbors) {
                if (landRegion.find(neighbor) != landRegion.end()) {
                    output -= 1;
                }
            }
    }
    return output;
      
    }
};