
Problem Statement:

    Given an integer array nums, the task is to find the contiguous subarray with the largest sum and return its sum.

Example:

    Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
    Output: 6
    Explanation: The subarray [4,-1,2,1] has the largest sum 6.

    Input: nums = [1]
    Output: 1
    Explanation: The subarray [1] has the largest sum 1.

    Input: nums = [5,4,-1,7,8]
    Output: 23
    Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.

Approach:

    Initialize max_so_far and max_end to negative infinity and zero, respectively.
    Iterate through the array:
    Update max_end as the sum of the current element and max_end.
    Update max_so_far as the maximum of max_so_far and max_end.
    If max_end becomes negative, reset it to zero.
    Return max_so_far, which represents the largest sum of a contiguous subarray.
    
Time Complexity: O(n), where n is the length of the input array nums. The algorithm traverses the array once.

Space Complexity: O(1), as the algorithm uses only a constant amount of extra space for variables max_so_far and max_end.