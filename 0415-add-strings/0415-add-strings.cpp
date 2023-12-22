class Solution {
public:
    string addStrings(string num1, string num2) {
        int s1 = num1.size(), s2 = num2.size(), it1 = s1 - 1, it2 = s2-1;
        
        string res = "";
         int carry = 0;
        while (it1 >= 0 && it2 >= 0) {
            int ch1 = num1[it1] - '0';
            int ch2  = num2[it2] - '0';
            
            int ch = ch1 + ch2 + carry;
            carry = ch / 10;
            ch = ch % 10;
        
            res += ch + '0';
            it1--;
            it2--;
        }
       
        if (it1 >= 0) {
            while (it1 >= 0) {
                int ch = num1[it1] - '0'; 
                ch = ch + carry;
                carry = ch / 10;
                ch = ch % 10;
                res += ch + '0';
                it1--;
            }
        }
        
        if (it2 >= 0) {
            while (it2 >= 0) {
                int ch = num2[it2] - '0'; 
                ch = ch + carry;
                carry = ch / 10;
                ch = ch % 10;
                res += ch + '0';
                it2--;
            }
        }
        if (carry == 1) {
            res += '1';
        }
        string ans = "";
        for (int i = res.size()-1; i >= 0; i--) {
            ans += res[i];
        }
        
        return ans;
    }
};