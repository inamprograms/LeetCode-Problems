class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        dic = {}
        res = ""
        for ch in s:
            if ch not in dic:
                dic[ch] = 0
            dic[ch] += 1
        
        for ch in t:
            if ch in dic:
                dic[ch] = abs(dic[ch] - 1)
            else:
                dic[ch] = 1
        print(dic)
        for key in dic:
            if dic[key] == 1:
                res = key
        return res