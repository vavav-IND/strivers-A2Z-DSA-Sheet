class Solution {
public:
    bool isPalindrome(int n) {
        int a=n;//need to store the og no. to compare with k, because we are updating the orginal number in the loop
        int k=0;//initialized here
        while(n>0){
            int t=n%10;//value assigned first so no need to initialize
            k=k*10+t;//if we dont initialize k will take a garbage value on rhs
            n=n/10;
            //k is the reversed number
        }
        if(k==a){
            return true;
        }
        else
        {
            return false;
        }
    }
};