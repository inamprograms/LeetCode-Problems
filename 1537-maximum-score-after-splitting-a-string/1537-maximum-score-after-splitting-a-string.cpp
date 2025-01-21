class Solution {
public:
    int maxScore(string s) {
        int res = INT_MIN;
        int left = 0, right = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') right++;
        }

        // if (right == 0) return 1;
    
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '0') {
                left++;
            } else {
                right--;
            }

            int score = left + right;
            res = max(res, score);
            
        }
        
        return res;
    }
};