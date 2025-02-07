class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_set<int> distinct_colors;
        unordered_map<int, int> ball_color_map;
        unordered_map<int, int> color_count;
        int n = queries.size();
        int prev_color_y;
        vector<int> result(n);
        for (int i = 0; i < n; i++) {
            vector<int> query = queries[i];
            int ball_x = query[0];
            int color_y = query[1];

            if (ball_color_map.find(ball_x) != ball_color_map.end()) {
                prev_color_y = ball_color_map[ball_x];
                color_count[prev_color_y]--;
                if (color_count[prev_color_y] == 0) distinct_colors.erase(distinct_colors.find(prev_color_y));
            } else {
                prev_color_y = -1;
            }
            ball_color_map[ball_x] = color_y;
            color_count[color_y]++;

            distinct_colors.insert(color_y);
            result[i] = distinct_colors.size();
        }

        return result;
    }
};