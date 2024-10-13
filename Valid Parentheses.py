class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        res=[]
        mapping={'}':'{',')':'(',']':'['}
        for i in s:
            if i in mapping.values():
                res.append(i)
            elif i in mapping.keys():
                if len(res) !=0 and res[-1]==mapping[i]:
                    res.pop()
                else:
                    return False        
        return not res            
