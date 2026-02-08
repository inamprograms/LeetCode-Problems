def niceString(s: str):
    char_set = set(s)
    for ch in s:
        if ch.islower() and ch.upper() not in char_set:
            return False
        if ch.isupper() and ch.lower() not in char_set:
            return False
    return True

class Solution:
    def longestNiceSubstring(self, s: str) -> str:
        ans = ""
        maxlen = 0

        for i in range(0, len(s)):
            for j in range(i, len(s)):
                sub_str = s[i:j+1]
                if niceString(s[i:j+1]):
                    length = len(sub_str)
                    if (length > maxlen):
                        maxlen = length
                        ans = sub_str
        return ans    