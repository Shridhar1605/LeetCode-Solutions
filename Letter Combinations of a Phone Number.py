class Solution(object):
    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """
        res=[""]
        val={'2':"abc",'3':"def",'4':"ghi",'5':"jkl",'6':"mno",'7':"pqrs",'8':"tuv",'9':"wxyz"}
    
        if not digits:
            return []
        for digit in digits:
            if digit not in val:
                continue
            letters=val[digit]
            newres=[]
            for i in res:
                for letter in letters:
                    newres.append(i+letter)
            res=newres
        return res            
