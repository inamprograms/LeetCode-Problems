class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int total = 0;
        bool check = true;
        vector<bool> res;
        for (int kid = 0; kid < n; kid++) {
            total = candies[kid] + extraCandies;
            
            for (int i = 0; i < n; i++) {
                if (total >= candies[i]) {
                    continue;
                } else {
                    check = false;
                    break;
                }
            }
            
            res.push_back(check);
            check = true;
        }
        
        return res;
    }
};