class Solution(object):
    def myAtoi(self, s):
        """
        :type s: str
        :rtype: int
        """
        sign=1
        res=0
        length=len(s)
        count=0
        count2=0
        count3=0
        count4=0
        count5=0
        count6=0
        for i in range(length):
            if s[i]==' ':
                if count==0:
                    pass
                else:
                    break    
            if s[i]=='-' and i!=length-1:
                
                count5+=1
                if count5==2:
                    return res*0 
                elif count2==0:
                    count3+=1
                    count+=1
                    sign=-1 
                else:
                    return res*sign 
            if s[i]=='+':
                count4+=1
                if count4==2 and i!=length-1:
                    return res*0
                elif count6>1:
                    return res*sign
                elif count3==0:
                    sign=1
                    count+=1
                    count2+=1       
                else:    
                    return res*sign
            if s[i].isdigit():
                    res=res*10+int(s[i])
                    count+=1
                    count2+=1
                    count6+=1
            if s[i].isalpha() or s[i]=='.':
                break        
        res=res*sign
        if res>2**31-1:
            res=2**31-1
        elif res< -2**31:
            res= -2**31
        return res
