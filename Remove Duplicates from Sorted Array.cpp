class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        auto last= unique(nums.begin(),nums.end());
        return distance(nums.begin(),last);
    }    
         
};
