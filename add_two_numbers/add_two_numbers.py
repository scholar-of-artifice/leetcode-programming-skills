# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        sentinel = ListNode()
        i, j, k = l1, l2, sentinel
        # add with nodes
        carry_val = 0
        while i or j:
            a = i.val if i else 0
            b = j.val if j else 0
            s = a + b + carry_val
            if s > 9:
                s = s % 10
                carry_val = 1
            else:
                carry_val = 0
            k.next = ListNode(val=s)
            if i:
                i = i.next
            if j:
                j = j.next
            k = k.next
        # add with carry value
        if carry_val > 0:
            k.next = ListNode(val=carry_val)
        return sentinel.next
