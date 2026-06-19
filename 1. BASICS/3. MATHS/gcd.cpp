//brute force method
class Solution {
public:
    int GCD(int n1,int n2) {
        int k=min(n1,n2);//the gcd can be the min of both the numbers
        int gcd=0;
        for(int i=1; i<=k; i++){
            if(n1%i==0 && n2%i==0){
                gcd=i;//updates gcd with each iteration
            }
        }
        return gcd;//imp
    }
};

//preferred method: Euclidean algorithm
class Solution {
public:
    int GCD(int n1,int n2) {
        while(n1>0 && n2>0){
            if(n1>n2){
                n1=n1%n2;
            }
            else
            n2=n2%n1;
        }
        if(n1==0)
        return n2;
        else
        return n1;
    }
};