Problem Description:

    Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive, 
    there is only one repeated number in nums. The task is to find and return this repeated number. It's required
    to solve the problem without modifying the array nums and using only constant extra space.

Approach:

    The solution utilizes Floyd's Tortoise and Hare algorithm to detect a cycle in a linked list. In this context,
    the array nums can be viewed as a linked list, where the value at each index represents the next index to jump to. 
    By considering the array as a linked list, the problem reduces to finding the start of the cycle, which is the duplicate number.

Steps:

    1.Initialize two pointers, slow and fast, both pointing to the first element of nums.
    2.Move slow one step ahead and fast two steps ahead in each iteration until they meet inside the cycle.
    3.Once slow and fast meet, reset slow to the first element of nums and keep fast at its current position.
    4.Move both slow and fast one step at a time until they meet again. The meeting point is the start of the cycle, 
    which represents the duplicate number.
    5.Return the duplicate number.
    
Complexity Analysis:

    Time Complexity: O(n), where n is the length of the nums array. Both pointers traverse the array at different speeds but meet in linear time.
    Space Complexity: O(1), as the solution utilizes only a constant amount of extra space.
        