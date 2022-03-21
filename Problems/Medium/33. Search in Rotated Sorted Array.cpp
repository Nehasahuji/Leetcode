33. Search in Rotated Sorted Array 
  /*Time Complexity: O(N) 
Auxiliary Space: O(1)
*/
 int search(vector<int>& nums, int target) {
       for(int i=0;i<nums.size();i++){
           if(nums[i]==target){
               return i;
           }
       } 
        
        return -1;
    }
	
	
 /*Time Complexity: O(nlogn) 
Auxiliary Space: O(1)
*/
int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]<nums[right])
                {
                  if(target <=nums[right] && target > nums[mid]){
                    left=mid+1;
                  }else{
                    right=mid-1;
                }
            }else{
                if(target >= nums[left] && target < nums[mid]){
                     right=mid-1;
                  }else{
                   left=mid+1;
                }
            }
        }
        
        return -1;
    }