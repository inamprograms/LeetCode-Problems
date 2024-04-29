class Solution {
public:
    string decodeString(string s) {
        stack<string> stk;
        
        for (auto ch: s) {
            if (ch != ']') {
                stk.push(string(1, ch));
            } 
            else {
                
                string str = "";
                while(stk.top() != "[") {
                    str = stk.top() + str;
                    stk.pop();
                }
               
                stk.pop();
                
                string k = "";
                while(!stk.empty() && isdigit(stk.top()[0]) ) {
                    k = stk.top() + k;
                    stk.pop();
                }
    
                for (int i = 0; i < stoi(k); i++) {
                     stk.push(str);   
                }
            }
        }
        
        string res = "";
        while (!stk.empty()) {
                res = stk.top() + res;
                stk.pop();
            }
        return res;
    }
};