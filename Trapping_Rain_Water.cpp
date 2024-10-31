//Use two pointer approach
class Solution {
public:
    int trap(vector<int>& height){
        int left = 0;
        int right = height.size() - 1;
        int maxRight = 0;
        int maxLeft = 0;
        int trappedWater = 0;
        while ( left <= right ){
            if( height[left] <= height[right] ){
                if ( height[left] >= maxLeft ){
                    maxLeft = height[left];
                }
                else{
                    trappedWater = trappedWater + ( maxLeft - height[left] );
                }
                left++;
            }

            else{

                if ( height[right] <= height[left] ){
                    if ( height[right] >= maxRight ){
                        maxRight = height[right];
                    }
                    else{
                        trappedWater = trappedWater + ( maxRight - height[right] );
                    }
                    right--;
                }
            }
        }
        return trappedWater;
    }
};
