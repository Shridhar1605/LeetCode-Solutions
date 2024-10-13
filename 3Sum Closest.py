class Solution(object):
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        nums.sort()
        length=len(nums)
        if length==3:
            return nums[0]+nums[1]+nums[2]
        diff=100000
        res=0
        for i in range(length-2):
            left,right=i+1,length-1
            while left<right:
                sums=nums[i]+nums[left]+nums[right]
                difference=abs(target-sums)
                if difference<diff:
                    diff=difference
                    res=sums
                if sums>target:
                    right-=1
                elif sums<target:
                    left+=1
                else:
                    return sums    
        return res            
