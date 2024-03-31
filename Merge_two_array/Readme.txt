Problem 88:Merge Two sorted arrays
    You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, 
    and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
    Merge nums1 and nums2 into a single array sorted in non-decreasing order.
    The final sorted array should not be returned by the function, but instead be 
    stored inside the array nums1. To accommodate this, nums1 has a length of m + n, 
    where the first m elements denote the elements that should be merged, and the last n
    elements are set to 0 and should be ignored. nums2 has a length of n.

Example
    Example 1:

        Input:
        nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3

        Output:
            [1,2,2,3,5,6]
        
        Explanation:
            The arrays being merged are [1,2,3] and [2,5,6].
            The result of the merge is [1,2,2,3,5,6].

Time Complexity
    The time complexity of this solution is O(m + n), where m is the length of 
    nums1 and n is the length of nums2. This is because we traverse through both arrays only once.

Space Complexity
    The space complexity of this solution is O(1), as we are modifying the input array
    nums1 in-place without using any additional space.