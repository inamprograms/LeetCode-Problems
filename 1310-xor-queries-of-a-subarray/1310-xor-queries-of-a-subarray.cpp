class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> res;
        
        int n = arr.size();
        vector<int> prefix((n + 1), 0);
        for (int i = 0; i < n; i++)  {
            prefix[i+1] = arr[i] ^ prefix[i];
        }
        for (vector<int> query: queries) {
            int l  = query[0];
            int r  = query[1] + 1;
            res.push_back(prefix[r] ^ prefix[l]);
        }

        // unordered_map<int, int> map;
        // int val = 0;
        // for (int key = 0; key < arr.size(); key++) {
        //     val ^= arr[key];
        //     map[key] = val;
        // }

        // for (vector<int> query: queries) {
        //     int start = query[0]; 
        //     int end = query[1];

        //     if (start > 0) {
        //         res.push_back(map[start - 1] ^ map[end]);
        //     } else {
        //         res.push_back(map[end]);
        //     }
        // }


        // Brute Force
        // for (vector<int> query: queries) {
        //     int start = query[0];
        //     int end = query[1];
        //     int ans = 0;
        //     for (int i = start; i <= end; i++) {
        //         ans ^= arr[i];
        //     }
        //     res.push_back(ans);
        // }
        return res;


    }
};