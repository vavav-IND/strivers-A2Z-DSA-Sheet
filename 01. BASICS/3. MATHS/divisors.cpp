class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> ls;
        for(int i=1; i<=sqrt(n); i++){//only need to go till sqrt of n as after that the divisors repeat 
            if(n%i==0){
                ls.push_back(i);

                if(n/i!=i){//need to print the rest of the divisors after sqrt of n
                    ls.push_back(n/i);
                }
            }
        }
        sort(ls.begin(),ls.end());
        // for(auto it : ls){
        //     cout << it <<" "; // here i do not need to print the vector as the function has a 
        //return type of vector<int>; 
        //if the function type was void i would need to print it
        return ls;
        }
    }
};