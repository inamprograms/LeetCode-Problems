class Solution {
public:
    int compress(vector<char>& chars) {
        int res = 0, i=0;
        for (int i = 0; i < chars.size();) {
            
          
            int n = 1;
            
            while (i+n < chars.size() && chars[i+n] == chars[i] ) {
                n++;
            }
            
            chars[res++] = chars[i];
            if (n > 1) {
                for (char c: to_string(n)) {
                    chars[res++] = c;
                }
               
            }
            
            i += n;
        }
        
        return res;
    }
};