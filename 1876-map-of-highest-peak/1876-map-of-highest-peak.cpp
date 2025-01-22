class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};

        int rows = isWater.size();
        int cols = isWater[0].size();
        vector<vector<int>> cellHeights(rows, vector<int>(cols, -1));

        queue<pair<int, int>> cellQue;

        for(int r = 0; r < rows; r++) {
            for(int c = 0; c < cols; c++) {
                if (isWater[r][c] == 1) {
                    cellQue.push({r, c});
                    cellHeights[r][c] = 0;
                }
            }
        }

        int heightOfNextLayer = 1;
        while (!cellQue.empty()) {
            int layerSize = cellQue.size();
            for (int i = 0; i < layerSize; i++) {
                pair<int, int> currentCell = cellQue.front();
                cellQue.pop();

                for (int d = 0; d < 4; d++) {
                    pair<int, int> neighborCell = {currentCell.first + dx[d], currentCell.second + dy[d]};
                    if (isValidCell(neighborCell, rows, cols) && cellHeights[neighborCell.first][neighborCell.second] == -1) {
                        cellHeights[neighborCell.first][neighborCell.second] = heightOfNextLayer;
                        cellQue.push(neighborCell);
                    }
                }
            }
            heightOfNextLayer++;
        }
        return cellHeights;
    }

private:
    bool isValidCell(pair<int,int> cell, int rows, int cols) {
        return cell.first >=0 && cell.second >= 0 && cell.first < rows && cell.second < cols;
    }
};