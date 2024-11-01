class Solution {
public:
    int jump(vector<int>& nums) {
        int length = nums.size() - 1;
        int index = 0;
        int end = 0;
        int jumps = 0;

        for (int i = 0; i < length; i++){
            index = max( index , i + nums[i]);

            if ( i == end ){
                jumps++;
                end = index;
            }
        }
        return jumps;
    }
};
