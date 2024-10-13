class Solution {
public:
    bool isPalindrome(int x) {
        long int temp=x;
        if(x<0){
            return false;
        }
        long int rev=0;
        long int rem=0;    
        while(x!=0){
            rem=x%10;
            rev= rev*10 +rem;
            x/=10;
        } 
        return rev==temp;
    }
};
