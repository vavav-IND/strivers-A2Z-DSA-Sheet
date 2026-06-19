class Solution {
public:
    bool isArmstrong(int n) {
        int a=n;
        int digits = to_string(n).length();//count the no of digits by converting to string
        int k=0;
        while(n>0){
            int t=n%10;
            k=k+pow(t,digits);//each digit is raised to the power of the no of digits present and added
            n=n/10;
        }
        if(k==a){
            return true;
        }
        else return false;
    }
};