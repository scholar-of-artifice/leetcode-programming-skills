# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(
        self, list1: Optional[ListNode], list2: Optional[ListNode]
    ) -> Optional[ListNode]:
        # create a list
        sentinel = ListNode()
        # start at the beginning of each list
        i, j, k = list1, list2, sentinel
        # reroute data from the new list and traverse
        while i and j:
            if i.val <= j.val:
                k.next = i
                i = i.next
            else:
                k.next = j
                j = j.next
            k = k.next
        # append the remaining data if any
        k.next = i or j
        # return the new list
        return sentinel.next
