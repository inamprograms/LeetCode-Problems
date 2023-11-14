class Solution {
public:
    int specialArray(vector<int>& nums) {
        // find the range 
        int start = 1, end = 0;
        for (int n: nums) {
            if (n > end) 
                end = n;
        }
        while (start <= end) {
        // do binary search 
            int mid = start + (end - start) / 2;
          
            int count = countGreaterNumbers(nums, mid);

            if (count > mid) {
                start = mid + 1;
            } else if (count < mid) {
                end = mid - 1;
            } else {
                return mid;
            }
        }
        return -1;
    }
    // calculate the count
    int countGreaterNumbers(vector<int> arr, int target) {
        int counter = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] >= target) counter++;
        }
        return counter;
    }
};