class Solution {
public:
    int countDigit(int n) {
        int k=0;
        //zero case
        if(n==0){
            return 1;
        }
        while(n!=0){
            n=n/10;//updating the number itself
            k++;
        }
        return k;// int always needs a return
    }
};