class Solution(object):
    def romanToInt(self, s):
        length=len(s)
        result=0
        roman={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        for i in range(length):
            result+=roman[s[i]]
            if i!=0 and roman[s[i-1]]<roman[s[i]]:
                result-= 2*roman[s[i-1]]
        return result            
