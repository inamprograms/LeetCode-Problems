class Solution {
public:
    string removeStars(string s) {
        stack<char> stk;
        
        for (char ch: s) {
            if (ch == '*') {
                stk.pop();
            } else {
                stk.push(ch);
            }
        }
        string res = "";
        while (!stk.empty()) {
            char ch = stk.top();
            // res =  ch + res;
            res += ch;
            stk.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};