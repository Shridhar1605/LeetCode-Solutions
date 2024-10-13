def check(left,right,nums):
    while left >=0 and right<=(len(nums)-1) and nums[left]==nums[right]:
            left-=1
            right+=1
    return nums[left+1:right]    
            
class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        length=len(s)
        max_pal=''
        for i in range (length):
            odd=check(i,i,s)
            if len(odd)>len(max_pal):
                max_pal=odd
            even= check(i,i+1,s)
            if len(even)>len(max_pal):
                max_pal=even    
        return max_pal        
