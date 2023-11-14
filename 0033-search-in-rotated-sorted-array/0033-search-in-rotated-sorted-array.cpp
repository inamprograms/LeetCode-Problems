class Solution {
public:
    int search(vector<int>& nums, int target) {
// 1. Find pivot
        int pivotIndex = getPivot(nums);
        // if we do not find the pivot it means array is not rotated 
        if (pivotIndex == -1) {
            // just do normal binary search 
            return binarySearch(nums, 0, nums.size()-1, target);
        }

// 2. if we found pivot then you have found 2 ascending sorted arrays
        if(nums[pivotIndex] == target) {
            return pivotIndex;
        } 
        if (target >= nums[0]) {
            return binarySearch(nums, 0, pivotIndex-1, target);
        } 
        // target < nums[start]
        return binarySearch(nums, pivotIndex+1, nums.size()-1, target);

         /* Use next 2 and 3 or above 2 only*/     
// // 2. Binary search on first part of array (0-pivot)
//         int res = binarySearch(nums, 0, pivotIndex, target);
//         if (res  != -1) {
//             return res;
//         }
// //3. if not found then search on second part of array (pivot+1, end)
//         return binarySearch(nums, pivotIndex +1, nums.size()-1, target);

}

    int binarySearch(vector<int> arr, int s, int e, int target) {
        int start =  s;
        int end = e;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] > target ) {
                end = mid - 1;
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                return mid;
            }
        }
        return -1;
    }
    int getPivot(vector<int> arr) {
        int start = 0;
        int end = arr.size()-1;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if (mid < end && arr[mid] > arr[mid + 1]){
                return mid;
            } else if (mid > start && arr[mid] < arr[mid-1]) {
                return mid-1;
            } else if (arr[start] >= arr[mid]) {
                end = mid - 1;
            } else { //(arr[start] < arr[mid]) 
                start = mid + 1;
            }
        }
        return -1;
    }
};