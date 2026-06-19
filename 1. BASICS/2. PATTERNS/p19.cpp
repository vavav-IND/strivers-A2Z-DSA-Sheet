class Solution {
public:
    void pattern19(int n) {
        for(int a=0; a<n;a++){
            //stars
            for(int b=0; b<n-a; b++){
                cout << "*";
            }
            //spaces
            for(int c=0; c<2*a; c++){
                cout<< " ";
            }
            //stars
            for(int b=0; b<n-a; b++){
                cout << "*";
            }
            cout << endl;
        }
        for(int i=0; i<n; i++){
            //stars
            for(int j=0; j<=i; j++){
                cout << "*";
            }
            //spaces
            for(int k=1; k<=2*(n-i-1); k++){
                cout << " ";
            }
            //stars
            for(int l=0; l<=i; l++){
                cout << "*";
            }
            cout << endl;
        }
        
    }
};