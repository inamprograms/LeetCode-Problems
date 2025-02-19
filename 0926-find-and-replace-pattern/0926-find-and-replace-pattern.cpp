class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        unordered_map<char, char> pattern_to_word;
        unordered_map<char, char> word_to_pattern;
        vector<string> res;

        for (string word: words) {

            int flag = true, p = 0;
            pattern_to_word = {};
            word_to_pattern = {};
            for (auto w: word) {

                if ((pattern_to_word.find(pattern[p]) != pattern_to_word.end() && pattern_to_word[pattern[p]] != w) ||
                
                   ( word_to_pattern.find(w) != word_to_pattern.end() && word_to_pattern[w] != pattern[p])) {
                   
                    flag = false;
                    break;
                }
                
                pattern_to_word[pattern[p]] = w;
                word_to_pattern[w] = pattern[p];
                p++;
            }
            if (flag) res.push_back(word);
        }
        return res;
    }
};