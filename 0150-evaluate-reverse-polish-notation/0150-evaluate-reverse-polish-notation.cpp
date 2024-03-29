class Solution {
public:
    
    int evalRPN(vector<string>& tokens) {
         stack<int> stk;
        
        for (string token: tokens) {
            
            if (token != "+" && token != "-" && token != "*" && token != "/") {
                stk.push(stoi(token));
            } else {
                
                int first = stk.top();
                stk.pop();
                int second = stk.top();
                stk.pop();
                
                if (token == "+") {
                    int res = second + first;
                    stk.push(res);
                } else if (token == "-") {
                    int res = second - first;
                    stk.push(res);
                } else if (token == "*") {
                    int res = second * first;
                    stk.push(res);
                } else  {
                    int res = second / first;
                    stk.push(res);
                } 
            }
        }
        
        return stk.top();
    }
};