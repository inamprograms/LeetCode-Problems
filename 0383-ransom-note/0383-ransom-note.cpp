class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> map;

        for (int i = 0; i < magazine.size(); i++) {
            char ch = magazine[i];

            map[ch]++;
        }

        for (int i = 0; i < ransomNote.size(); i++) {
            char ch = ransomNote[i];

            if (map[ch] == 0) {
                return false;
            }
            map[ch]--;
        }

        return true;
    }
};