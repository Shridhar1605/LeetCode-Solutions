# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        dummy=ListNode(0)
        dummy.next=head
        first=second=dummy

        for i in range(n+1):
            first=first.next
        while first:
            first=first.next
            second=second.next
        second.next=second.next.next
        return dummy.next        
