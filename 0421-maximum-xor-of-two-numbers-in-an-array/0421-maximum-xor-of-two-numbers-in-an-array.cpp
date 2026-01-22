class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int max_xor = 0;
        int mask = 0;
        for(int i = 31; i >= 0; i--) {
            mask |= (1 << i);
            unordered_set<int> prefix; 

            for (int num : nums) {
                prefix.insert(num & mask); 
                // cout << "num:  " << bitset<32>(num) << "\n";
            }
            int candidate = max_xor | (1 << i);

            for (int p : prefix) {
                int temp = candidate ^ p;
                // cout << "candidate ^ p :" << temp << ": " << bitset<32>(temp) << "\n";
                if (prefix.count(candidate ^ p)) {
                    max_xor = candidate;
                    break;
                }
            }

        }

        return max_xor;
    }
};