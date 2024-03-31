class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> stk;
        int n = temperatures.size();
        vector<int> res(n);
        for (int i = 0; i < n; i++){
            int currTemp = temperatures[i];
            int currDay = i;
            while(!stk.empty() && currTemp > stk.top().second){
                int prevDay = stk.top().first;
                int prevTemp = stk.top().second; 
                stk.pop();
                res[prevDay] = currDay - prevDay;
            }
            stk.push({currDay, currTemp});
        }
        return res;
    }
};