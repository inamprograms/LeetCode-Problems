class Solution {
public:

    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> map;
        
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }
        
        vector<pair<int, int>> freq;
        
        for (auto a: map) {
            freq.push_back(make_pair(a.first, a.second));
        }
        
        sort(freq.begin(), freq.end());
        reverse(freq.begin(), freq.end());
    
        stable_sort(freq.begin(), freq.end(), [](const auto& a, const auto& b) {
            return a.second < b.second;
        });

        vector<int> ans;
        for (auto p: freq) {
            int i = p.second;
            while(i > 0) {
                ans.push_back(p.first);
                i--;
            }
        }
        return ans;
    }
};