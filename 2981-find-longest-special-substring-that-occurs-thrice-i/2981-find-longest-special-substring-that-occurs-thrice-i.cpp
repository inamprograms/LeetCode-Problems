class Solution {
public:
    int maximumLength(string s) {
        unordered_map<char, vector<int>> map;
        int res = -1;
        for (int i = 0, j; i < s.size(); i=j) {
            
            for (j = i; j < s.size() && s[i] == s[j]; j++) {
                map[s[i]].push_back(j - i + 1);
                
                sort(map[s[i]].begin(), map[s[i]].end(), greater());
                
                if (map[s[i]].size() > 3) {
                    map[s[i]].resize(3);
                }
                
                if (map[s[i]].size() == 3) {
                    res = max(res, map[s[i]].back());
                }
            }
        }
        
        return res;
        
    }
};