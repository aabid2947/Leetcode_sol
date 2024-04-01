
Ransom Note
    Problem Statement
        Given two strings ransomNote and magazine, determine whether ransomNote can be constructed
         using the letters from magazine. Each letter in magazine can only be used once in ransomNote.

    Examples
        Example 1:
            Input: ransomNote = "a", magazine = "b"
            Output: false
        Example 2:
            Input: ransomNote = "aa", magazine = "ab"
            Output: false
        Example 3:
            Input: ransomNote = "aa", magazine = "aab"
            Output: true

    Approach
        To solve this problem, we can follow the following approach:

        Convert ransomNote into a set to remove duplicates.
        Iterate over the unique characters in ransomNote.
        For each character, check if the count of that character in ransomNote is greater than its count in magazine or if the character is not present in magazine. If any of these conditions are true, return False.
        If all characters in ransomNote can be constructed using magazine, return True.


    Time Complexity
        Let:
        m be the length of the ransomNote string.
        n be the length of the magazine string.
        Converting ransomNote into a set takes O(m) time, and iterating over the unique
        characters takes  O(m) time. Within the loop, counting occurrences of characters 
        in both strings takes O(n+m) time. Hence, the overall time complexity is O(m+n).

    Space Complexity
        The space complexity is :
        O(m) due to the set created from ransomNote.
    
    Question?
    Why creating a set is more effecient?
    Ans.
        Creating a set reduces running time in this problem because it allows for efficient membership testing and removes duplicate elements.
        
        When we convert ransomNote into a set, we eliminate duplicate characters, reducing the number of unique characters we need to iterate over. 
        This is particularly beneficial when the ransomNote string contains many duplicate characters.

        Moreover, sets in Python have an average constant-time complexity for membership testing. So, when we iterate over the unique characters of 
        ransomNote and check for membership in magazine, each membership test is efficient, typically requiring only O(1) time.