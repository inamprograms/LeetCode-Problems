class Solution {
public:
    string simplifyPath(string path) {
        path += "/";
        // "/a//b////c/d//././/.."
        
        string cur = "";
        stack<string> stk;
        
        for (auto ch : path) {
            if (ch == '/') {
                if (cur == "..") {
                    if (!stk.empty()) {
                        stk.pop();
                    }
                       
                } else if (cur != "" && cur != ".") {
                    stk.push(cur);
                }
                
                cur = "";
            } else {
                cur += ch;
            }
        }
        
        string res = "";
        if (stk.empty()) {
            
            return "/";
            
        } else {
            
            while (!stk.empty()) {
                res = "/" + stk.top() + res;
                stk.pop();
            }
        }
        
        return res;
    }
};