class Solution:
    def smallestNumber(self, n: int) -> int:
        # res = 0
        # for i in range(len(bin(1000))+ 1):
        #     if n & (1 << 12 - i):
        #         for j in range(12-i + 1):
        #             res = res | 1 << j
        #         break
        # return res

        for i in range(len(bin(1000)) + 1):
            if n & (1 << 12 - i):
                return 2** (12-i+1) - 1
        
        bits = n.bit_length()
        return (1 << bits) - 1