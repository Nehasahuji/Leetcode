18. 4Sum 
 /*Time Complexity: O(N^4) 
Auxiliary Space: O(1)
*/
 vector<vector<int>> fourSum(vector<int>& nums, int target) {
       
        vector<vector<int>> result;
         if(nums.size()<4) return result;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    for(int l=k+1;l<n;l++){
                    if(nums[j]+nums[k]+nums[l]+nums[i]==target) {
                        result.push_back({nums[i],nums[j],nums[k],nums[l]});
                    }
                    while(l!=n-1 && nums[l]==nums[l+1])l++;
                    }
                while(k!=n-1 && nums[k]==nums[k+1]) k++;
                }
                while(j!=n-1 && nums[j]==nums[j+1])j++;
            }
            while(i!=n-1 && nums[i]==nums[i+1]) i++;
        }
        
        return result;
    }
	
 /*Time Complexity: O(N^3) 
Auxiliary Space: O(1)
*/
 vector<vector<int>> fourSum(vector<int>& nums, int target) {
       
        vector<vector<int>> result;
        if(nums.size()<4) return result;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                {
                    int left=j+1;
                    int right=n-1;
                    int sum=target-(nums[i]+nums[j]);
                    // cout << sum;
                    cout << nums[left]<< " " << nums[right] << " ";
                    while(left<right){
                        if(sum==nums[left]+nums[right]){
                            result.push_back({nums[i],nums[j],nums[left],nums[right]});
                            while(left!=n-1 && nums[left]==nums[left+1]) left++;
                             while(right!=1 && nums[right]==nums[right-1]) right--;
                            left++;
                            right--;
                        }else if(nums[left]+nums[right]>sum){
                             while(right!=1 && nums[right]==nums[right-1]) right--;
                            right--;
                        }else{
                             while(left!=n-1 && nums[left]==nums[left+1]) left++;
                            left++;
                        }
                    }
                    
                }
                while(j!=n-1 && nums[j]==nums[j+1])j++;
            }
            while(i!=n-1 && nums[i]==nums[i+1]) i++;
        }
        
        return result;
    }

