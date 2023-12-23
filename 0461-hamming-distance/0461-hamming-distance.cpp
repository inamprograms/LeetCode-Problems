class Solution {
public:
    int hammingDistance(int x, int y) {
        
//         int count = 0;
//         // int z = x | y;
        
//         for (int i = 0; i < 32; i++) {
            
//             // if ((x >> i) ^ (y >> i)) {
//             // 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
//                 cout <<  (y >>= 1) << " ";
//                 count++;
//             // }
//         }
        
//         return count;
        
        int ans=0;
        
        while(x || y){
            
            int mask = x & 1;
            int mask2 = y & 1;
            if (mask != mask2) {
                ans++;
            }
            
            x >>= 1;
            y >>= 1;
        }
        return ans;
    }
};