class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort( candidates.begin(), candidates.end() );
        vector< vector <int>> result;
        vector <int> current;

        function <void (int,int)> dfs = [&](int index, int remaining){
            if ( remaining == 0){
                result.emplace_back(current);
                return;
            }
            if ( index >= candidates.size() || remaining < candidates[index]){
                return;
            }

            for ( int j = index; j < candidates.size(); ++j){
                if ( j > index && candidates[j] == candidates[j-1] ){
                    continue;
                }

                current.emplace_back(candidates[j]);
                dfs( j+1 , remaining - candidates[j]);
                current.pop_back();
            }
            
        };
        dfs( 0, target );
        return result;
    }
};
