class Solution {
public:
    void pattern15(int n) {
        for(int i=0; i<n; i++){
            for(char j='A'; j<='A'+(n-i-1); j++){
                cout<<j;
            }
            cout<<endl;
        }
    }
};