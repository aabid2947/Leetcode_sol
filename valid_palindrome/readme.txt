Valid Palindrome
    Problem Description
        Given a string s, determine if it is a palindrome after converting all uppercase letters to 
        lowercase and removing all non-alphanumeric characters. A palindrome reads the same forward and backward.
    
    Example

        Input: s = "A man, a plan, a canal: Panama"
        Output: True

        Input: s = "race a car"
        Output: False

        Input: s = " "
        Output: True
        This solution effectively handles the problem by removing non-alphanumeric characters, converting the 
        string to lowercase, and then checking if it's a palindrome using the two-pointer technique, resulting in 
        a time complexity of O(n) and space complexity of O(n).

    Approach
        Remove all non-alphanumeric characters and convert the string to lowercase using list comprehension.
        Use two pointers approach to check if the string is a palindrome.
        Initialize two pointers i and j at the beginning and end of the string respectively.
        While i is less than j, compare characters at i and j.
        If they are not equal, return False.
        Otherwise, increment i and decrement j.
        If the loop completes without returning False, return True.

    Time Complexity
        The time complexity of this approach is O(n), where n is the length of the input string s.
        Constructing the modified string takes O(n) time.
        Checking if the string is a palindrome using two pointers takes O(n/2) time.

    Space Complexity
        The space complexity is O(n).
        We use extra space to store the modified string, where n is the length of the input string s.

    Pseudocode

        1. Define a function isPalindrome(s: str) -> bool.
        2. Modify the string s to remove non-alphanumeric characters and convert it to lowercase.
        3. Initialize pointers i = 0 and j = length(s) - 1.
        4. While i < j:
            - If s[i] is not equal to s[j], return False.
            - Increment i and decrement j.
        5. If the loop completes without returning False, return True.







