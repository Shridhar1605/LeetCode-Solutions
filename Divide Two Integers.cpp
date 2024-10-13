class Solution {
public:
    long int divide(long int dividend,long int divisor){
        if (dividend == 0){
            return 0;
        }
        if (divisor == 0){
            if (dividend > 0){
                return pow(2,31)-1;
            }
            else if (dividend < 0){
                return -pow(2,31);
            } 
        }
        long int ans = 0;
        long int count=0;
        int sign=1;
        long int temp = abs(dividend);
        long int n = abs(divisor);
        if ((dividend > 0 && divisor < 0) || ((dividend < 0 && divisor > 0))){
            sign = -1;
        }
        while (temp >= n){
            count=0;
            while (temp > n<<(count+1)){
                count++;
            }
            temp -= (n<<count);
            ans += 1<<count; 
        }
        if (ans*sign > pow(2,31) -1){
            return pow(2,31) - 1;
        }
        else if (ans*sign < -pow(2,31)){
            return -pow(2,31);
        }
        else {return ans*sign;}
    }
};
