class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> count;
        int left = 0, right = 0;
        int res = 0;
        
        while (right < s.size()) {
            
            count[s[right]]++;
            
            int maxValue = INT_MIN;
            for (auto pair : count) {
                maxValue = max(maxValue, pair.second);
            }
            if ((right - left + 1) - maxValue > k ) {
                count[s[left]]--;
                left++;
            }
            
            res = max(res, right - left + 1);
            right++;
        }
        
        return res;
    }
};