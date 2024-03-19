
Problem 21: Merge Two Sorted Lists

Problem Statement:
    Merge two sorted linked lists and return it as a new sorted list. 
    The new list should be made by splicing together the nodes of the first two lists.

Example:
    Input: list1 = 1->2->4, list2 = 1->3->4
    Output: 1->1->2->3->4->4

Approach:
    We can solve this problem by iterating through both lists simultaneously, comparing the values of the current nodes from each list, and merging them into a new sorted list. We'll use a dummy node to keep track of the head of the merged list and a temporary pointer to traverse the merged list.

    1.Initialize a dummy node ans to store the head of the merged list.
    2.Initialize a temporary pointer temp to traverse the merged list.
    3.Compare the values of the current nodes from list1 and list2.
    4.Connect the smaller node to temp->next and move temp to the next node in the merged list.
    5.Repeat this process until reaching the end of either list.
    6.If there are remaining nodes in list1 or list2, append them to the merged list.
    7.Return the next node of the dummy node, which is the head of the merged list.

Time Complexity:
    The time complexity of this approach is O(n). We iterate through both lists once to merge them into a single list.

Space Complexity:
    The space complexity of this approach is O(1).
    We only use a constant amount of extra space for pointers and variables, regardless of the size of the input lists.