/*242. Valid Anagram
https://leetcode.com/problems/valid-anagram/

Time complexity = O(nlogn)
space Complexity = O(1)
*/

 bool isAnagram(string s, string t) {
       //sort both the strings and check weather they are equal or not
	   sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        if(s==t)
            return true;
        else
            return false;
    }
	
	
/*Time complexity = O(n)
space Complexity = O(S+T)
*/

bool isAnagram(string s, string t) {
      map<char,int> mp;
      map<char,int> mp1;
        
        // we check the basic condition comparing lengths
        if(s.length()!=t.length()) return false;
      
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            
        }
        
        for(int i=0;i<t.length();i++){
            mp1[t[i]]++; //iterate over and add value to map
        }
        
        
        return mp==mp1?true:false; //check if two maps are equal 
    }
	
/*Time complexity = O(n)
space Complexity = O(S)
*/

bool isAnagram(string s, string t) {
      map<char,int> mp;
        
        // we check the basic condition comparing lengths
        if(s.length()!=t.length()) return false;
      
        for(int i=0;i<s.length();i++){
            mp[s[i]]++; //iterate over and add value to map
            mp[t[i]]--; //iterate and reduce value from the map
        }
        
        //if the map cntains any one of the value as 1 then the string is not anagram
        for(auto itr:mp){
            if(itr.second)
                return false;
        }
        
        return true;
    }