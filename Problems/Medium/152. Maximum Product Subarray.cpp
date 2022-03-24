152. Maximum Product Subarray
/*Time complexity O(n^2)
space Complexity O(1);
*/
int maxProduct(vector<int>& nums) {
        int result=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++){
            int mul=nums[i];
            for(int j=i+1;j<n;j++){
                result=max(result,mul);
                mul=mul*nums[j];
            }
            result=max(result,mul);
        }
        
        return result;
    }
/*	
Time complexity O(n)
space Complexity O(1;
*/	
int maxProduct(vector<int>& nums) {
        int maxProduct=nums[0];
        int minProduct=nums[0];
        int res=nums[0];
        
        for(int i=1;i<nums.size();i++){
           
            if(nums[i]<0)   
            {
                swap(maxProduct,minProduct);
            }
            
            maxProduct=max(nums[i],maxProduct*nums[i]);
            minProduct=min(nums[i],minProduct*nums[i]);
            res=max(maxProduct,res);
        }
        
        return res;
    }