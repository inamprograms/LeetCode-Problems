class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> map;
        
        int n = s.size();
        for (int i = 0; i < s.size(); i++) {
            map[s[i]]++;
        }
     
        vector<pair<char, int>> freq;
        
        for (auto a: map) {
            freq.push_back(make_pair(a.first, a.second));
        }
        
        sort(freq.begin(), freq.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });
        
        string ans = "";
        for (auto p: freq) {
            int i = p.second;
            while(i > 0) {
                ans += p.first;
                i--;
            }
        }
        return ans;
    }
};