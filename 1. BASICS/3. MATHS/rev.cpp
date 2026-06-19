class Solution {
public:
    int reverseNumber(int n) {
        int k=0;//initialized here
        while(n>0){
            int t=n%10;//value assigned first so no need to initialize
            k=k*10+t;//if we dont initialize k will take a garbage value on rhs
            n=n/10;

        }
        return k;
    }
};