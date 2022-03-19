 14. Longest Common Prefix
 /*Time Complexity: O(N^3) 
Auxiliary Space: O(1)
*/
 string longestCommonPrefix(vector<string>& strs) {
        string str="";
        for(int i=0;i<strs[0].length();i++){
           char temp=strs[0][i];
           for(int j=1;j<strs.size();j++){
               if(strs[j][i]!=temp){
                   return str;
               }
           }
          
          str=str+temp;
       }
        
        return str;
    }