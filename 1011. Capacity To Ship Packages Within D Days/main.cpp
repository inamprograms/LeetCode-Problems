class Solution {
public:
    int shipWithinDays(vector<int>& arr, int days) {
        int start , end = 0, res = -1;
        start = *max_element(arr.begin(), arr.end());
        // Find range
        for (int i = 0; i < arr.size(); i++) {
            // max of all weights in array
            end += arr[i];
        }

        while (start <= end) {
        // cout << start << " "<< end << endl;
            int mid = start + (end - start) / 2; //35
            int countDays = 0;
            int shipableWeight = 0;
            // Fill the ship untill its capacity/mid
            for (int val: arr) {
                // ready new container
                if (shipableWeight + val  <= mid) {
                    shipableWeight += val;
                } else {
                    countDays++;
                    shipableWeight = val;
                }
            }
            if (shipableWeight > 0) {
                countDays++;
            }
            cout << " 1: "<< countDays  << " "<<mid << endl;
                if (countDays <= days) {
                    res = mid;
                    end = mid-1;
                } else {
                    start = mid + 1;
                } 
        }
        return res;
        
    }
};