class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        res = [[]]
        freq = {}
        nums.sort()
        for num in nums:
            subsets = []
            for cur in res:
                key = tuple(cur + [num])
                if key not in freq:
                    subsets.append(list(key))
                    freq[key] = 1
            res += subsets
        return res