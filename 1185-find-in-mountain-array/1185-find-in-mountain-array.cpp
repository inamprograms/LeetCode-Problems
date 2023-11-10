/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        
        int index = findPeakElementIndex(mountainArr);
        // find from first half form 0 to peak index
        int firstTry = orderAgnosticBS(mountainArr, 0, index, target, true);
        if (firstTry != -1) {
            return firstTry;
        }
        // if not found in first half then try to search in second half from index+1 to arr.length-1
        return orderAgnosticBS(mountainArr, index+1, mountainArr.length()-1, target, false);

    }

    int orderAgnosticBS(MountainArray &mountainArr, int startIndex, int peakIndex, int target, bool isAsc) {

        int start = startIndex;
        int end = peakIndex;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if(isAsc) {
                if(target < mountainArr.get(mid)) {
                    end = mid - 1;
                } else if(target > mountainArr.get(mid)) {
                    start = mid + 1;
                } else {
                    return mid;
                }
            } else {
                if(target > mountainArr.get(mid)) {
                    end = mid - 1;
                } else if(target < mountainArr.get(mid)) {
                    start = mid + 1;
                } else {
                    return mid;
                }
            }
        }
        return -1;

    }

    int findPeakElementIndex(MountainArray &mountainArr) {
        int start = 0;
        int end = mountainArr.length()-1;

        while(start != end) {
            int mid = start + (end - start) / 2;
            if (mountainArr.get(mid) < mountainArr.get(mid+1)) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }
        return start;
    }
};