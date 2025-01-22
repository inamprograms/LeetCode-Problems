class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int rows = image.size(), cols = image[0].size();
        int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};
        queue<pair<int, int>> q;
        set<pair<int, int>> seen;
        int spc = image[sr][sc];

        q.push({sr, sc});
        seen.insert({sr, sc});
        
        while(!q.empty()) { 
            auto [cr, cc] = q.front();
            q.pop();
            image[cr][cc] = color;

            for (int d = 0; d < 4; d++) {
                int nr =  dx[d] + cr, nc = dy[d] + cc;
                if (nr < 0 || nr >= rows || nc < 0 || nc >= cols) continue;
                if (seen.find({nr, nc}) != seen.end()) continue;
                if (image[nr][nc] != spc) continue;

                q.push({nr, nc});
                seen.insert({nr, nc});
            }
        }
        return image;
    }
};