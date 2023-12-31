class Solution {
public:
    int maximumLength(string s) {
        unordered_map<string, int> map;
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                string str = s.substr(i, j - i + 1);
                
                map[str]++;
            }
        }
        int res = -1;
        for (auto [k, v] : map) {
          
            if (set(k.begin(), k.end()).size() == 1 && v >= 3) {
                res = max(res, int(k.size()) );
            }
        }
        
        return res;
    }
};