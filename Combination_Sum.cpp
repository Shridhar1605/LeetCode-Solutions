class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector< vector<int>> result;
        vector <int> current;
        sort(candidates.begin(), candidates.end());

        function<void ( int,int ) > dfs = [&] (int index, int remaining ){
            if (remaining == 0){
                result.emplace_back(current);
                return;
            }
            if ( index >= candidates.size() || remaining < candidates[index]){
                return;
            }

            dfs( index+1 , remaining);
            current.push_back(candidates[index]);

            dfs( index, remaining - candidates[index]);
            current.pop_back();
        };

        dfs( 0 , target);
        return result;

    }
};
