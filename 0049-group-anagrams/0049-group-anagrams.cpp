class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for (string str: strs) {
            string s = str;
            sort(s.begin(), s.end());
            if (map.find(s) != map.end()) {
                map[s].push_back(str);
            } else {
                map[s] = {str};
            }
        }
        vector<vector<string>> res;
        for (auto pair: map) {
            res.push_back(pair.second);
        }

        return res;
    }
};