class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(begin(digits), end(digits));
        
        int carry = 1, i = 0; 
        while (carry) {
            
            if (i < digits.size()) {
                
                if (digits[i] == 9) {
                    digits[i] = 0;
                } else {
                    digits[i] += 1;
                    carry = 0;
                }
            } else {
                digits.push_back(1);
                carry = 0;
            }
            i++;
        }
        reverse(begin(digits), end(digits));
        return digits;
    }
};