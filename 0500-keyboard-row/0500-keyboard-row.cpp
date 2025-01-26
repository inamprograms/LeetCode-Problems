class Solution {
public:
    char checkAndConvert(char ch) {
        if (isupper(ch)) {
            return tolower(ch);  
        }
        return ch; 
    }

    bool check(string word, set<char> row) {
        bool flag = true;
        for (char w : word) {
            char ch = checkAndConvert(w);
            if (row.find(ch) != row.end()) continue;
            flag = false;
            break;
        }
        return flag;
    }

    vector<string> findWords(vector<string>& words) {
        vector<string> res;

        set<char> row1 = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
        set<char> row2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
        set<char> row3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};

        for (string word : words) {
            char ch = checkAndConvert(word[0]);
            cout << ch;
            if (row1.find(ch) != row1.end()) {
                if (check(word, row1)) {
                    res.push_back(word);
                }
            } else if (row2.find(ch) != row2.end()) {
                if (check(word, row2)) {
                    res.push_back(word);
                }
                
            } else if (row3.find(ch) != row3.end()) {
                if (check(word, row3)) {
                    res.push_back(word);
                }
            }
        }
        return res;
    }
};