class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        length=len(nums)
        res=[]
        nums.sort()
        if length<3:
            return res
        for i in range(length):
            if i>0 and nums[i]==nums[i-1]:
                continue
            left,right=i+1,length-1
            while left<right:
                total=nums[i]+nums[left]+nums[right]
                if total>0:
                    right-=1
                elif total<0:
                    left+=1
                else:
                    res.append([nums[i],nums[left],nums[right]])
                    lastLow=nums[left]
                    lastHigh=nums[right]
                    while left<right and nums[left]==lastLow:
                        left+=1
                    while left<right and nums[right]==lastHigh:
                        right-=1
        return res                    
