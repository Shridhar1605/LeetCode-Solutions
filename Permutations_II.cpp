class Solution { //Modified previous solution and used hashing
public:
    void permuteHelper (vector <int>& nums, vector <int> &helper, vector< vector< int >> &result, vector <bool>& used){
        if (nums.size() == helper.size() ) {
                result.push_back(helper);
                return;
            }

        for ( int i = 0; i < nums.size(); i++){
            
            if ( i > 0 && nums[i] == nums[i - 1] && !used[i - 1]){
                continue;
            }

            if ( !used[i] ){
    
                helper.push_back(nums[i]);
                used[i] = true;

                permuteHelper(nums, helper, result, used);

                used[i] = false;
                helper.pop_back();
            }    
        }
    }    

    vector<vector<int>> permuteUnique( vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector< vector< int >> result;
        vector <int> helper;
        vector <bool> used(nums.size(), false);
        permuteHelper ( nums, helper, result, used);
        return result;
    }
};
