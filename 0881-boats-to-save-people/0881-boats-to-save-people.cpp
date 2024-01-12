class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        sort(people.begin(), people.end());
        
        int left = 0, right = people.size() - 1, boats = 0;
        
        while (left <= right) {
            
            int total = people[left] + people[right];
            if (total <= limit) {
                left++;
            }
            
            right--;
            boats++;
        }
        return boats;
        
    }
};