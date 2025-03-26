class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> rows(9), cols(9), grid(9);

        for(int i = 0; i < board.size(); i++){

            for(int j = 0; j < board.size(); j++){

                if(board[i][j] == '.')
                    continue;
                
                char val = board[i][j];

                if (rows[i].count(val) || cols[j].count(val) || grid[i/3*3 + j/3].count(val))
                    return false;
                rows[i].insert(val);
                cols[j].insert(val);
                grid[i/3*3 + j/3].insert(val);
            }
        }

        return true;
    }
};