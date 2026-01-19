class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> res;
        int pref_xor = pref[0];
        res.push_back(pref_xor);

        for (int i = 1; i < pref.size(); i++) {
            res.push_back(pref_xor ^ pref[i]);
            pref_xor = pref[i];
        }

        // 5 =  0101


        return res;
    }
};