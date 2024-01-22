class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int> rows(m);
        vector<int> cols(n);
        
        for (auto v: indices) {
            rows[v[0]]++;
            cols[v[1]]++;
        }
        
        int res = 0;
        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                if ((rows[r] + cols[c]) % 2 != 0) {
                    res++;
                }
            }
        }
        
        return res;
    }
};