387. First Unique Character in a String
/*Time Complexity: O(N^2) 
Auxiliary Space: O(1)
*/
int firstUniqChar(string s) {
        for(int i=0;i<s.length();i++){
            bool flag=true;
            for(int j=0;j<s.length();j++){
                if(s[i]==s[j] && i!=j){
                    flag=false;
                    break;
                }
            }
            if(flag){
                return i;
            }
        }
        
        return -1;
    }
/*Time Complexity: O(N) 
Auxiliary Space: O(N)
*/
	
int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        for(auto &it : s) mp[it]++;
        for(int i=0;i<s.size();i++) if(mp[s[i]] == 1) return i;
        return -1;
    }
/*Time Complexity: O(N) 
Auxiliary Space: O(N)
*/GF
int firstUniqChar(string s) {
        int fi[256];
        fill(fi,fi+256,-1);
        
        for(int itr=0;itr<s.length();itr++){
               if(fi[s[itr]]==-1)
                   fi[s[itr]]=itr;
               else
                   fi[s[itr]]=-2;
        }

        int res=INT_MAX;
        for(int i = 0; i<256; i++) {
                if(fi[i] >= 0)
                res = min(res, fi[i]);
         }

        if(res == INT_MAX) return -1;
        else return res;

    }