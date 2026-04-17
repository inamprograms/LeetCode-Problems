class Solution:

    def reverseVowels(self, s: str) -> str:
        vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
        l = 0
        r = len(s) - 1
        s = list(s)
        
        while l < r:
            if s[l] in vowels and s[r] in vowels:
                temp = s[l]
                s[l] = s[r]
                s[r] = temp
                l = l + 1
                r = r - 1
           
    
            if s[l] not in vowels:
                l = l + 1
            if s[r] not in vowels:
                r = r - 1
        return "".join(s)