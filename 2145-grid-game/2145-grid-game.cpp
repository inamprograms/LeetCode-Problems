class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n = grid[0].size();

        long long top = grid[0][0], buttom = 0, secondRobo, res = LONG_MAX;

        for(int i = 1; i < n; i++){
            top += grid[0][i];
        } 

        for(int i = 0; i < n; i++){
            top -= grid[0][i];
            secondRobo = max(top, buttom);
            res = min(res, secondRobo);
            buttom += grid[1][i];
        }
    return res;
    }
};