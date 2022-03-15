215. Kth Largest Element in an Array
/*Time Complexity O(nlogn);
Space complexity O(1)
sort the array adn return the element from first
*/

int findKthLargest(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());
       return nums[(nums.size()-k)];
    }
	
/*Time Complexity :The worst case time complexity of this method is O(n2), but it    		works      in               O(n) on average. ;
Space complexity O(1)
sort the array adn return the element from first
*/
	
int partition(vector<int>& nums,int low,int high){
      int poivot=nums[high];
        int i=low;
        for(int j=low;j<=high-1;j++){
            if(nums[j]>poivot){
                swap(nums[i],nums[j]);
                 i++;
            }
        } 
        swap(nums[i],nums[high]);
        return i;
    }
    
    
    int quickSelect(vector<int>& nums,int k,int left,int right){
        int p=partition(nums,left,right);
        if(p==k-1){
            return nums[k-1];
        }else if(p<k-1){
            return quickSelect(nums,k,p+1,right);
        }else{
            return quickSelect(nums,k,left,p-1);
        }
    }
    int findKthLargest(vector<int>& nums, int k) {
        if(k>nums.size())
            return -1;
        else{
            int left=0;
            int right=nums.size()-1;
            return quickSelect(nums,k,left,right);
        }
    }