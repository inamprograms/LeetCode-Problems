    sort(nums.begin(), nums.end());
    int right = 1;
    for(int left = 0; left < nums.size()-1; left++)
        {
            if(nums[left] == nums[right]){
                return true;
            }
        right++;
        }
    return false;
 