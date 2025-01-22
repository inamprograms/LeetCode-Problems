class Solution {
public:

    int islandPerimeter(vector<vector<int>>& grid) {
        int side = 0;
        bool found = false;
        int rows = grid.size();
        int cols = grid[0].size();
        queue<pair<int, int>> q;
        set<pair<int, int>> seen;

        int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c] == 1) {
                    q.push({r, c});
                    seen.insert({r, c});
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

        while(!q.empty()) {
           
            pair<int, int> land = q.front();
            q.pop();

            for (int d = 0; d < 4; d++) {
                int nr = land.first + dx[d], nc = land.second + dy[d];
                if (nr < 0 || nr >= rows || nc < 0 || nc >= cols || grid[nr][nc] == 0) {
                    side++;
                    continue;
                }

                if (seen.find({nr, nc}) != seen.end()) continue;
                q.push({nr, nc});
                seen.insert({nr, nc});

            }
        }
        return side;
    }
};