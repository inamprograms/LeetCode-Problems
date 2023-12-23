class Solution {
public:
    int maxScore(string s) {
        int zeroCount = 0, oneCount = 0;
        
        if (s[0] == '0')
            zeroCount = 1;      
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == '1') {
                oneCount++;
            }
        }
        int maxCount = zeroCount + oneCount;
        for (int i = 1; i < s.size()-1; i++) {
            if (s[i] == '0') {
                zeroCount++;
            } else {
                oneCount--;
            }
            
            maxCount = max(maxCount, zeroCount + oneCount);
        }
        
        return maxCount;
    }
};