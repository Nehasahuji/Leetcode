202. Happy Number

bool isHappy(int n) {
        float sum = 0;
        int digit = 0;
        while(true)
        {
            while(n>0)
            {
                digit = n%10;
                sum = sum + pow(digit,2);
                n = n/10;
            }
         
            if(sum==1)
            {
                return true;
            }
            else if(sum==4)
            {
                return false;
            }
            else
            {
                n = sum;
                sum = 0;
            }
        }
        return false;
        
    }