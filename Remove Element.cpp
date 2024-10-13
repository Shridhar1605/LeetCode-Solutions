class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();
        int res=0;
        for (int i=0;i<length;i++){
            if (nums[i]!=val){
                nums[res]=nums[i];
                res++;
            }
        }
        return res;
    }
};
