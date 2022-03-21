557. Reverse Words in a String III
 /*Time Complexity: O(N) 
Auxiliary Space: O(1)
*/
   string reverseWords(string s) {
        int start=0;
        for(int end=0;end<s.length();end++){
            if(s[end]==' '){
                reverse(s.begin()+start,s.begin()+end);
                start=end+1;
            }
        }
        reverse(s.begin()+start,s.end());
        return s;
    }