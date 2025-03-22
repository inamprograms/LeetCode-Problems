class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0, maxLen = 0;

        while (right < s.size()) {
            int check = left;
            while (check < right) {
                if (s[check] == s[right]) {
                    left = check + 1;
                    break;
                }
                check++;
            }
            maxLen = max(maxLen, right - left + 1);
            right++;

        }
        return maxLen;
    }
};