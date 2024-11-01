class Solution {
public:
    void permuteHelper (vector <int>& nums, vector <int> &helper, vector< vector< int >> &result){
        if (nums.empty()) {
                result.push_back(helper);
                return;
            }

        for ( int i = 0; i < nums.size(); i++){
            int num = nums[i];
            helper.push_back(num);
            nums.erase(nums.begin() + i);

            permuteHelper(nums, helper, result);

            nums.insert(nums.begin() + i, num);
            helper.pop_back();
        }
    }    

    vector<vector<int>> permute( vector<int>& nums) {
        vector< vector< int >> result;
        vector <int> helper;
        permuteHelper ( nums, helper, result);
        return result;
    }
};
