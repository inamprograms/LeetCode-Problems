class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> stk;
        int i = 0;
        for (auto val: pushed) {
            stk.push(val);
            
            while (i < popped.size() && !stk.empty() && popped[i] == stk.top()) {
                
                stk.pop();
                i++;
            }
        }
        
        return stk.empty();
    }
};