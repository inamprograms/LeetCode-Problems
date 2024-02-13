class Solution {
public:
    bool isPalindrom(string s) {
        int l = 0, r = s.length() - 1;
        
        while (l <= r) {
            if (s[l] == s[r]) {
                l++;
                r--;
                continue;
            }
            return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        string res = "";
     
        for (string s: words) {
            bool flag = isPalindrom(s);
            
            if (flag) {
                res = s;
                return res;
            }
        }
        
        return res;
    }
};