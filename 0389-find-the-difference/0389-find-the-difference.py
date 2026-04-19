class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        dic = {}
        res = ""
        for ch in s:
            # if ch not in dic:
            #     dic[ch] = 0
            # dic[ch] += 1
            dic[ch] = dic.get(ch, 0) + 1
        
        for ch in t:
            if ch not in dic or dic[ch] == 0:
                return ch
            dic[ch] -= 1
    