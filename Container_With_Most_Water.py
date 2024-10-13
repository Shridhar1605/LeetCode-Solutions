class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        area=0
        res=0
        start=0
        end=len(height)-1
        while start<end:
            area= min(height[start],height[end]) * (end-start)
            res=max(area,res)
            if height[start]> height[end]:
                end-=1
            else:
                start+=1
        return res            
        
                     
