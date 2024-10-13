class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        result=nums1+nums2
        result.sort()
        length=len(result)
        res=0
        if length%2==0:
            res=(float)(result[length/2]+result[(length/2)-1])/2
            return res
        else:
            return result[(length-1)/2]
