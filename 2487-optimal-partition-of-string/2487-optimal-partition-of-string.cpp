class Solution {
public:
    int partitionString(string s) {
        int ch = 0, count = 0;
        unordered_set<char> partition;

        while (ch < s.size()) {
            if (partition.find(s[ch]) != partition.end()) {
                partition = {};
                count++;
            }
            partition.insert(s[ch]);
            ch++;
        }
        return count + 1;


    }
};