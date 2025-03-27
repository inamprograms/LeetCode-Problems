class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> map;
        for (char ch: magazine) {
            map[ch]++;
        }

        for (char ch: ransomNote) {
            if (map.find(ch) == map.end() || map[ch] <= 0) {
                return false;
            }
            map[ch]--;
        }


        return true;
    }
};