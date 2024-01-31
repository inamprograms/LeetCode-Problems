class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left = 0, right = left + k - 1;
        int res = 0;
        int curSum = 0;
        
        for (int i = left; i < right; i++) {
            curSum += arr[i];
        }
       
        while (left <= arr.size() - k) {
            
            curSum += arr[right];
             cout << curSum << " ";
            if (curSum / k >= threshold) {
                res++;
            }
            curSum -= arr[left];
            left++;
            right++;
        }
        return res;
    }
};