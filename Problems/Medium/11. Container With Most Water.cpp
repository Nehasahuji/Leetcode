/*Time Complexity  O(n^2)
Space Complexity O(1)
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
       int maxWater=0;
        for(int i=0;i<height.size();i++){  //iterate through each element
            for(int j=i+1;j<height.size();j++){
                int currWater=0;
                currWater=min(height[i],height[j])*(j-i);  //find currWaterStorage
                maxWater = max(currWater, maxWater); //maxWater Storage
            }
        }
        
        return maxWater;
    }
};

/*Time Complexity  O(n)
Space Complexity O(1)
*/

 int maxArea(vector<int>& height) {
       int left=0;
       int right=height.size()-1;
       int maxWater=0;
       while(left<right){
          int minHeight=min(height[left],height[right]);
          maxWater=max(maxWater,minHeight*(right-left));
          if(height[left]<height[right]){
              left++;
          }else{
              right--;
          }
       }
        
        return maxWater;
    }
};