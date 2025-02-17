class Solution {
public:
    int strStr(string haystack, string needle) {

        vector<int> vec;
        for (int i = 0; i < haystack.size(); i++) {
            if (needle[0] == haystack[i]) vec.push_back(i);
        }

        for (auto first: vec) {
            int it1 = first;
            int it2 = 0;
            bool flag = true;
            while(it2 < needle.size()) {
                if (haystack[it1] == needle[it2]) {
                    it1++;
                    it2++;
                } else {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                return first;
            }
        }
    return -1;
    }
};