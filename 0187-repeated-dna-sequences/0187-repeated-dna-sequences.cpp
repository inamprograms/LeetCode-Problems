class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.size();
        vector<string> res;
        if (n <= 10) return {};
        
        unordered_map<string, int> seen;
        
        for (int i = 0; i <= n - 10; i++) {
            string ss = s.substr(i, 10);
            
            seen[ss]++;
            
            if (seen[ss] == 2) {
                res.push_back(ss);
            }
            
        }
        
        return res;
        
    }
};