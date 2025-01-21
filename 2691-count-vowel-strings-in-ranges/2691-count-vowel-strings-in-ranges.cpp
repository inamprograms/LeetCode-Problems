class Solution {
public:
    bool isVowel(char ch) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return 1;
        return 0;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {

        vector<int> res(queries.size());
        vector<int> prefixSum(words.size());
        int sum = 0;

        for (int w = 0; w < words.size(); w++) {
            string word = words[w];
            int start = 0, end = word.size() - 1;
            if (isVowel(word[start]) && isVowel(word[end])) {
                sum += 1;
            }
            prefixSum[w] = sum;
        }


        for (int q = 0; q < queries.size(); q++) {
            vector<int> range = queries[q];
            res[q] =
        prefixSum[range[1]] - (range[0] == 0 ? 0 : prefixSum[range[0] - 1]);

        }
        return res;
    }
};