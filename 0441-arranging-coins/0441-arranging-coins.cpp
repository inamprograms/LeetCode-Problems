class Solution {
public:
    int arrangeCoins(int n) {
        int start = 1;
        int end = n;
        int res = 1;

        while (start <= end) {
            long long rows =  start + (end - start) / 2;
           

            // int coinsNeeded = (rows / 2) * (rows+1);
            long long coinsNeeded = rows * (rows+1)/2;
            
            if(coinsNeeded == n){
                return rows;
            } else if (coinsNeeded > n) {
                end = rows - 1;
            } else {
                res = rows;
                start = rows + 1;
            } 
        }
        return res;
    }
};
