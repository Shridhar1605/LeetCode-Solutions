class Solution(object):
    def longestCommonPrefix(self, strs):
        length=len(strs)
        count=0
        result=""
        if length==0:
            return result
        for j in range(min(len(s) for s in strs)):
            for i in range(1,length):
                if strs[0][j]==strs[i][j]:
                    count+=1
            if count==length-1:
                    result+=strs[0][j]
                    count=0
            else:
                break
        return result
