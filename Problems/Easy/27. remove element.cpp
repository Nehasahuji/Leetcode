27. Remove Element
//time complexity O(n)
//space complexity O(n)

int removeElement(vector<int>& nums, int val) {
        vector<int> numbers;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                numbers.push_back(nums[i]);
            }
        }
        
        nums.clear();
        
        for(int i=0;i<numbers.size();i++){
            // cout << numbers[i];
            nums.push_back(numbers[i]);
        }
        
        return numbers.size();
    }