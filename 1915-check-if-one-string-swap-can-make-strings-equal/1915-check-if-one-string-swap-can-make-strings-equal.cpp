class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1 == s2) return true;

        int count = 0, p1 = -1, p2 = -1;

        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == s2[i]) continue;
            count++;
            
            if (count > 2) return false;

            if (p1 == -1 && count == 1) {
                p1 = i;
            }

            if (p2 == -1 && count == 2) {
                p2 = i;
            }
        }
        if (p1 != -1 && p2 != -1 && s1[p1] == s2[p2] && s1[p2] == s2[p1]) return true;
        return false;
    }
};