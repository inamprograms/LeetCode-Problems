class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        max_count = float('-inf')
        count = 0
        for i in range(len(nums)):
            print(i)
            if nums[i] == 1:
                count += 1
            else:
                max_count = max(count, max_count)
                count = 0
        max_count = max(count, max_count)
        return max_count