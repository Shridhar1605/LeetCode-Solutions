class Solution {
public:

    int firstOccurence( vector <int> & nums, int high, int low, int target){
        int first = -1;
        while ( low <= high ){
            int mid =  low + (high - low ) / 2;
            if (nums[mid] == target){
                first = mid;
                high = mid - 1;
            }
            else if ( nums[mid] > target ){
                high = mid - 1; 
            }

            else{
                low = mid + 1;
            }
        }
        return first;

    }

    int lastOccurence( vector <int> & nums, int high, int low, int target){
        int last = -1;
        while ( low <= high ){
            int mid =  low + (high - low ) / 2;
            if (nums[mid] == target){
                last =  mid;
                low = mid + 1;
            }
            else if ( nums[mid] > target ){
                high = mid - 1; 
            }

            else{
                low = mid + 1;
            }
        }
        return last;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int length = nums.size() -1;

        int first = firstOccurence( nums, length, 0, target);
        int last = lastOccurence( nums, length, 0, target );

        return {first, last};
    }
};
