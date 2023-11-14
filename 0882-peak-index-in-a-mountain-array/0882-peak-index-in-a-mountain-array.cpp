class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size();

        while (start != end) {

            int mid = start + (end - start) / 2;
            if (arr[mid] < arr[mid+1]) {
                //you are in increasing part of array
                start = mid + 1;
            } else {
                //you are in decreasing part of array
                end = mid;
            }
        }
        return start;
    }
   
};