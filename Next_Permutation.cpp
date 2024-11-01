class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int length = nums.size();
        int i = length - 2;

        while ( i >= 0 && nums[i] >= nums[i+1]){
            i--;
        }

        if ( i >= 0){
            int j = length - 1;
            while ( nums[i] >= nums[j]){
                j--;
            }
            swap(nums[i], nums[j]);    
        }

        reverse(nums.begin() + i + 1, nums.end());
    }
};
