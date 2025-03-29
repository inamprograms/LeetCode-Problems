class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string , vector<string>> m;
        for(int i=0; i < strs.size(); i++)
        {
            string element = strs[i];
            int count[26] = {0};
            for(int in=0; in < element.length(); in++)
            {
                count[int(element[in]) - int('a')] += 1;
                // count[element[in] - 'a']++;
            }
            string key = "";
            for(int j=0; j < 26; j++)
            {
                // key += to_string(count[i] + 'a');
                key.append(to_string(count[j] + 'a'));
            }

            m[key].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for (auto it = m.begin(); it != m.end(); it++) {
            ans.push_back(it->second);
        }
        return ans;

    }
};