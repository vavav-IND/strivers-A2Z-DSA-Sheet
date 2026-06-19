class Solution {
  public:
    void printNumbers(int n) {
        if(n<1)
            return;
        
        cout<<n<<endl;//here print is coded first
        printNumbers(n-1);//no return as void
    }
};