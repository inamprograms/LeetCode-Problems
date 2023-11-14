class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int pivotIndex = findPivotWithDuplicates(nums);
        if (pivotIndex == -1) {
            return binarySearch(nums, 0, nums.size()-1, target);
        }
        if(nums[pivotIndex] == target) {
            return true;
        } 
        if (target >= nums[0]) {
            return binarySearch(nums, 0, pivotIndex-1, target);
        } 
        return binarySearch(nums, pivotIndex+1, nums.size()-1, target);
        
    }

    bool binarySearch(vector<int> arr, int s, int e, int target) {
        int start =  s;
        int end = e;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] > target ) {
                end = mid - 1;
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                return true;
            }
        }
        return false;
    }

    int findPivotWithDuplicates(vector<int> arr) {
        int start = 0;
        int end = arr.size()-1;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if (mid < end && arr[mid] > arr[mid + 1]){
                return mid;
            } else if (mid > start && arr[mid] < arr[mid-1]) {
                return mid-1;
            } 

            if (arr[mid] == arr[start] && arr[mid] == arr[end]) {
                if (start < arr.size()-1 && arr[start] > arr[start+1]) return start;
                start++;
                if (end > 0 && arr[end] < arr[end-1]) return end - 1;
                end--;
            } else if (arr[start] < arr[mid] || (arr[start] == arr[mid] && arr[mid] > arr[end])) {
                start = mid + 1;
            } else {
                end = mid -1;
            }
        }
        return -1;
    }
};