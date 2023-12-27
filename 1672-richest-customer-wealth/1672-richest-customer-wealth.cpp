class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth = INT_MIN;
        
        for (auto customer: accounts) {
            
            int amt = 0;
            for (auto bank: customer) {
                amt += bank;
            }
            
            if (amt > wealth) {
                wealth = amt;
            }
        }
        
        return wealth;
    }
};