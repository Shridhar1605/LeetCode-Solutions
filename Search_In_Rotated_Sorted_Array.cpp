class Solution {
public:

    int start (vector<int>& nums ){
        
        int low = 0;
        int high = nums.size() - 1;
        
        while ( low < high){
            if ( nums[low] <= nums[high]) return low;
            int mid = low + (high - low) / 2;
            if (nums[high] < nums[mid]){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }
        return low;    
    }

    int binarySearch( vector <int> & nums, int high, int low, int target){
        while ( low <= high ){
            int mid =  low + (high - low ) / 2;
            if (nums[mid] == target){
                return mid;
            }
            if ( nums[mid] > target ){
                high = mid - 1; 
            }

            else{
                low = mid + 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        
        int end = nums.size() - 1;
        int pivot = start(nums);
        int first = binarySearch(nums, end , pivot, target);
        
        if ( first != -1 ) return first;
        else{
            int second =  binarySearch(nums, pivot - 1, 0, target);
            return second;
        }

    }
};
