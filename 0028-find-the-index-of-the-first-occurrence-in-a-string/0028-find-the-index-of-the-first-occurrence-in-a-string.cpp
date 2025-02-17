class Solution {
public:
    int strStr(string haystack, string needle) {

        vector<int> vec;
        for (int i = 0; i < haystack.size(); i++) {
            if (needle[0] == haystack[i]) {
                int it1 = 0;
                int it2 = i;
                bool flag = true;

                while(it1 < needle.size()) {
                    if (needle[it1] == haystack[it2]) {
                        it1++;
                        it2++;
                    } else {
                        flag = false;
                        break;
                    }
                }

                if (flag) return i;
            }
        }

    return -1;
    }
};