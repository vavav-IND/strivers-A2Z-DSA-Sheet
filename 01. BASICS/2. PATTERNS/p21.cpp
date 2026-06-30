class Solution {
public:
    void pattern21(int n) {
         //first row
         for(int i=0; i<n; i++){
            cout << "*";
         }
         cout << endl;
         for(int j=0; j<n-2; j++){
             
             //  left stars
             cout << "*";
             
            //spaces 
            for(int m=0; m<n-2; m++){
                cout << " ";
            }
            
            
            //right stars
            cout << "*";
            
            cout << endl;
         } 
         //last row
         for(int i=0; i<n; i++){
            cout << "*";
         }
    }
};