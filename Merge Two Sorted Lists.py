# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        result=ListNode(0)
        dummy=result
        while list1 is not None and list2 is not None:
            if list1.val>list2.val:
                result.next=ListNode(list2.val)
                list2=list2.next
                result=result.next
            elif list2.val>list1.val:  
                result.next=ListNode(list1.val)
                list1=list1.next
                result=result.next
            elif list1.val==list2.val:
                result.next=ListNode(list1.val)
                list1=list1.next
                result=result.next
                result.next=ListNode(list2.val)
                list2=list2.next
                result=result.next
        if list1 is not None:
            result.next=list1
        if list2 is not None:
            result.next=list2
        return dummy.next
