28. Implement strStr()
/*Time Complexity O((n-m)*m);
Space complexity O(1)
*/ 
 int strStr(string haystack, string needle) {
        int m=needle.size();
        int n=haystack.size();
        if(m==0) return 0;
        
        for(int i=0;i<=n-m;i++){
            int j;
            if(haystack[i]==needle[0]){
                
            
            for(j=0;j<m;j++){
                if(haystack[i+j]!=needle[j])
                    break;
            }
            
            if(j==m)
                return i;
            }
        }
        
        return -1;
    }