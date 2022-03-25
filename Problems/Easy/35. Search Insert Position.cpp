 35. Search Insert Position
 /* solved using stl*/
  int searchInsert(vector<int>& nums, int target) {
        auto low = lower_bound(nums.begin(),nums.end(),target);
        return low-nums.begin();
    }
	
/* 
using binary search 
time complexity O(logn)
space complexity O(1)
*/
   int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        
        return low;
    }