//9. Palindrome Number
/*Time Complexity: O(logN) 
Auxiliary Space: O(1)
*/
bool isPalindrome(int x) {
        int temp=x;
        int sign=0;
        long no=0;
        long rem=0;
        while(x>0){
            rem=x%10;
            no=no*10+rem;
            x=x/10;
        }
        
        if(temp==no){
            return true;
        }else{
            return false;
        }
    }
/*Time Complexity: O(1) 
Auxiliary Space: O(1)
*/
 bool isPalindrome(int x) {
       string s = to_string(x);
        if(s == string(s.rbegin(), s.rend())) {  //read string in reverse order from begin to end 
            return true;
        } else {
            return false;
        }
    }