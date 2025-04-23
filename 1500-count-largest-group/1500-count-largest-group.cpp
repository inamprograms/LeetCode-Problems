class Solution {
public:
    int digitSum(int n) {
        int total = 0;
        while (n > 0) {
            total += n % 10;  
            n /= 10;       
        }
        return total;
    }

    int countLargestGroup(int n) {
        unordered_map<int, vector<int>> map;
        for (int i = 1; i <= n; i++) {
            int sum = digitSum(i);
            map[sum].push_back(i);
        }
        int count = 0;
        int max_size = 0;
        for (auto pair: map) {
            auto vec = pair.second;
            if (vec.size() > max_size) {
                max_size = vec.size();
                count = 1; 
            } else if (vec.size() == max_size) {
                count++;
            }
        }

        return count;
    }
};