class Solution {
public:
    string removeStars(string s) {
        string res = "";
        
        int star = 0;
        
        while (star < s.size()) {
            
            if (s[star] == '*') {
                res.pop_back();
            } else {
                res += s[star];
            }
            star++;
            
        }
        return res;
    }
};