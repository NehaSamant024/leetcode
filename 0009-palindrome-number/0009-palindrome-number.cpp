class Solution {
public:
    bool isPalindrome(int x) {
        
    long int num=x;
        long int rev=0;
     
        if(num<0)
        {
        return false;
        }
        while(num>0)
        {
            rev=(rev*10)+num%10;
            num=num/10;
        }
            return(x==rev);
    }
};