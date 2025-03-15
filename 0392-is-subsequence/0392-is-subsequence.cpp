class Solution {
public:
    bool isSubsequence(string s, string t) {
        int it = 0, n = s.size();
        if (t.size() == 0 && n == 0) return true;
        for (char ch: t) {
            if (ch == s[it]) it++;

            if (n == it) return true;;
        }
        return false;
    }
};