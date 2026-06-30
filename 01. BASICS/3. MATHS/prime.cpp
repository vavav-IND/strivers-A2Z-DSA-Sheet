class Solution {
public:
    bool isPrime(int n) {
        vector<int> ls;
        for(int i=1; i<=sqrt(n); i++){
            if(n%i==0){
                ls.push_back(i);

                if(n/i!=i){
                    ls.push_back(n/i);
                }
            }
        }
        if(ls.size()==2){
            return true;
        }
        else
        return false;
    }
};

//better approach
class Solution {
public:
    bool isPrime(int n) {
        if(n<=1)
        return false;
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
};