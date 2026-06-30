class Solution {
public:
    void pattern18(int n) {
        for(int i=0; i<n; i++){
            for(char j='A'+(n-i-1); j<='A'+(n-1); j++){
                cout << j << " ";
            }
            cout << endl;
        }
    }
};