class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = INT_MIN;
        int rows = accounts.size(), cols = accounts[0].size();
        for (int cus = 0; cus < rows; cus++) {
            for (int bank = 1; bank < cols; bank++) {
                accounts[cus][bank] += accounts[cus][bank - 1];
            }
            max_wealth = max(max_wealth, accounts[cus][cols - 1]);
        }
        return max_wealth;
    }
};