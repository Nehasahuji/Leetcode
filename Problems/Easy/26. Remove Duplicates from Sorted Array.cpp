26. Remove Duplicates from Sorted Array
 /*Time Complexity: O(N) 
Auxiliary Space: O(N)
*/
int removeDuplicates(vector<int>& nums) {
        set<int> res;
        for(int i=0;i<nums.size();i++){
            res.insert(nums[i]);
        }
    
        nums.clear();
       for (auto it = res.begin(); it != res.end(); it++)
       {
           cout << *it << " ";
           nums.push_back(*it);
        
       }
        return res.size();
    }

 /*Time Complexity: O(N) 
Auxiliary Space: O(1)
*/
 int removeDuplicates(vector<int>& nums) {
       if(nums.size()==0) return 0;
        int count=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[count]=nums[i+1];
                count++;
            }
        }
        
        return count;
    }