169. Majority Element

/*Time Complexity O(n^2);
Space complexity O(1)
Iterate thought each element and check weather it's count> N/2
*/
int majorityElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){ //iterate through each element
            int count=0;   //maintain count for ith element
            for(int j=0;j<nums.size();j++){  //search in the array if find increment the count
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            
            cout << count;
            
            if(count>(nums.size()/2)){
                return nums[i];
            }
        }
        
        return 0;
    }

/*Time Complexity O(n);
Space complexity O(n)
Maintain value and its frequency in the map 
iterate over map and check it's frequency is gregater than N/2 then it is majority element
*/	
	
int majorityElement(vector<int>& nums) {
       map<int,int> mp;
       for(int itr=0;itr<nums.size();itr++){
           mp[nums[itr]]++;
       }
        
       for(auto itr=mp.begin();itr!=mp.end();itr++){
           if(itr->second>nums.size()/2){
               return itr->first;
           }
       }
        
        return 0;
    }


/*Time Complexity O(n);
Space complexity O(1)
Using Moore’s Voting Algorithm
*/

int majorityElement(vector<int>& nums) {
        int count=1;
        int res=0;
		//find the Majority in array
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[res]){
                count++;
            }
            else{
                count--;
            }
            
            if(count==0){
                res=i;
                count=1;
            }
        }
        
        //check if the candidate occurs more than n/2 times 
       
		count=0;
        int temp=nums[res];
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==temp){
                count++;
            }
    
        }
        return temp;      
    }