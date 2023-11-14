class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int start = 0;
        int end = 0;
        for (int i = 0; i < nums.size(); i++) {
            start = max(start, nums[i]); // in end of loop this will contain the max item form the array/simple linear search
            end += nums[i]; // maximum value we can have/sum of all values

        }

        // binary search
        while (start < end) {
            //try for the middle as the potential ans
            int mid  = start + (end - start) / 2;

            // calculate how many peices you can devide this in with this max sum
            int sum = 0; 
            int pieces = 1;
            for (int num : nums) {
                //making pieces
                if (sum + num > mid) {
                    // you cannot add this in this sub array, make new one 
                    // say you add this num in new sub array, then sum = num
                    sum = num; // one sub array added
                    pieces++;
                } else {
                    sum += num;
                }
            }

            if (pieces > k) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }

        return end; // start == end
    }
};