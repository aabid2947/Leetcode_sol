class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        out = set(ransomNote)
        for i in out :
            if  ransomNote.count(i)>magazine.count(i) or i  not in magazine:
                return False
        return True


