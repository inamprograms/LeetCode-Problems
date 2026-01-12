class Solution {
public:
    vector<int> circularPermutation(int n, int start) {
        
        int size = 1 << n;
        vector<int> res(size);
        int idx = 0;
        for (int i = 0; i < size; i++) {
            res[i] = i ^ (i >> 1);
            if (res[i] == start)  idx = i;
        }

        reverse(res.begin(), res.begin() + idx);
        reverse(res.begin() + idx, res.end());
        reverse(res.begin(), res.end());

        return res;
    }
};