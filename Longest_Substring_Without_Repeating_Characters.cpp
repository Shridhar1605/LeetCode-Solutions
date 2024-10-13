class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        length=strlen(s);
        int fwd=0;
        int bwd=length;
        for(int i=fwd+1;i<length;i++){
            for(int j=i;j<length;j++)    
                if (s[fwd]==s[j]){
                    fwd=i;
                }
                else{
                    fwd+=1; 
                }
        }
    }
};