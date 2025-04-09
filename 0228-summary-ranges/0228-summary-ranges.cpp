class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int a = 0, b = 0;
        int n = nums.size();
        string ran = "";
        vector<string> res;
        while (b < n) {
            if (b < n - 1 && (long long)nums[b + 1] - (long long)nums[b] == 1) b++;
            else {
                ran = "";
                if (a == b) {
                    ran += to_string(nums[a]);
                } else {
                    ran += to_string(nums[a]) + "->" + to_string(nums[b]); 
                }
                res.push_back(ran);
                cout<< b <<" ";
                b++;
                a = b; 
            }
        }
        return res;
    }
};