class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] > b[1]; 
        });

        int it = 0, res = 0;
        int numOfBoxes, numOfUnits;
        for (auto boxType: boxTypes) {
            if (truckSize == 0) break;
            numOfBoxes = boxType[0];
            numOfUnits = boxType[1];

            int extraBoxes = numOfBoxes - truckSize;
            if (extraBoxes > 0)
                numOfBoxes -= extraBoxes;
            res += numOfBoxes * numOfUnits;
            truckSize -= numOfBoxes;
        }
 


    
        return res;
    }
};