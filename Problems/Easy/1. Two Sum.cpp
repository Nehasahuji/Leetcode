//1. Two Sum
/*Time Complexity: O(N^2) 
Auxiliary Space: O(1)
*/
 vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        
   return res;
 }
 

/*Time Complexity: O(N) 
Auxiliary Space: O(N)
*/
 
 vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
          int temp=target-nums[i];
            if(mp.find(temp)!=mp.end()){
                res.push_back(i);
                res.push_back(mp[temp]);
                return res;
            }
            
            mp[nums[i]]=i;
        }
        
        return res;
    }