class Solution {
public:
    void pattern9(int n) {
        for(int i=0; i<n; i++){
            for(int j=0; j<n-1-i; j++){
                cout << " ";
            }
            for(int k=n-1-i; k<n; k++){
                cout << "*";
            }
            for(int l=n; l<n+i; l++){
                cout << "*";
            }
            cout << endl;
        }
        for(int m=0; m<n; m++ ){
            for(int a=0; a<m; a++){
                cout << " ";
            }
            for(int b=0; b<2*(n-m)-1; b++){
                cout << "*";
            }
            
            cout << endl;
        }
    }
};