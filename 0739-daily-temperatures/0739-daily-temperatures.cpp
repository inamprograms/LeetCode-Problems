class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
       stack<pair<int , int>> stk;
        
        int n = temp.size();
        vector<int> res(n);
        
        for (int i = 0; i < n; i++) {
            
            int curDay = i; 
            int curTemp = temp[i];
            
            while (!stk.empty() && curTemp > stk.top().second) {
                int prevTemp = stk.top().second;
                int prevDay = stk.top().first;
                
                stk.pop();
                
                res[prevDay]  = curDay - prevDay;
            }
            
            stk.push({curDay, curTemp});
        }
        return res;
    }
    
    
};