class Solution(object):
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """
        answer = "1"
        for i in range (2, n+1):
            temp = ""
            j = 0
            while ( j < len(answer)):
                ch = answer[j]
                count = 0
                while ( j < len(answer) and ch == answer[j]):
                    j += 1
                    count += 1
                temp += str(count) + ch
            answer = temp
        return answer    
