class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        # res = [[]]
        # freq = {}
        # # nums.sort()
        # for num in nums:
        #     subsets = []
        #     for cur in res:
        #         key = tuple(cur + [num])
        #         if key not in freq:
        #             subsets.append(list(key))
        #             freq[key] = 1
        #     res += subsets
        # return res


        res = []
        subset = []
        nums.sort()
        
        def create_subset(i):
            if i == len(nums):
                res.append(subset[:])
                return
            
            subset.append(nums[i])
            create_subset(i+1)
            subset.pop()
            
            while i + 1 < len(nums) and nums[i] == nums[i+1]:
                i += 1
                
            create_subset(i+1)
        
        create_subset(0)
        return res      