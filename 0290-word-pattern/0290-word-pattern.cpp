class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, char> wordToChar;
        unordered_map<char, string> charToWord;
        stringstream ss(s);
        string word;
        int i = 0;
        while (ss >> word) {

            if (i >= pattern.size()) 
                return false;

            if (wordToChar.find(word) != wordToChar.end() && wordToChar[word] != pattern[i]) {
                return false;
            }
            if (charToWord.find(pattern[i]) != charToWord.end() && charToWord[pattern[i]] != word) {
                return false;
            }
            wordToChar[word] = pattern[i];
            charToWord[pattern[i]] = word;
            i++;
        }
        return i == pattern.size();
    }
};