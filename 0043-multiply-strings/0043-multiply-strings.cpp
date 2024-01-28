class Solution {
public:
    string multiply(string num1, string num2) {
        
        if (num1 == "0" || num2 == "0") {
            return "0";
        }
        
        vector<int> res((num1.size() + num2.size()), 0);
        
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        
        for (int i1 = 0; i1 < num1.size(); i1++) {
            for (int i2 = 0; i2 < num2.size(); i2++) {
                
                int digit = (num1[i1] - '0') * (num2[i2] - '0');
                res[i1 + i2] += digit;
                res[i1 + i2 + 1] += res[i1 + i2] / 10;
                res[i1 + i2] = res[i1 + i2] % 10;
            }
        }
       
        reverse(res.begin(), res.end());
        int beg = 0;
        while (beg < res.size() && res[beg] == 0) {
            beg++;
        }
      
        stringstream ss;
        for (int i = beg; i < res.size(); i++) {
            ss << res[i];
        }
        string ans = ss.str();
        
        return ans;
    }
};