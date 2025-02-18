class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> result(n, 0);
        int smaller = 0, larger = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] < pivot) smaller++;
            else if (nums[i] > pivot) larger++;

        }
        int m_it = smaller, l_it = smaller + (n - smaller - larger), s_it = 0;
    
        for (int i = 0; i < n; i++) {
    
            if (nums[i] == pivot) {
                result[m_it] = nums[i];
                m_it++;
            } 
            if (nums[i] > pivot) {
                result[l_it] = nums[i];
                l_it++;
            }
            if (nums[i] < pivot) {
                result[s_it] = nums[i];
                s_it++;
            }
      
        }
        return result;
    }
};