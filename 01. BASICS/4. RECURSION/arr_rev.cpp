class Solution{
public:
    void helper(int i, int arr[], int n){//since the tuf site only provided two arguments we had
                                         //to use a helper function
        if(i>=n/2)
            return;
        
        swap(arr[i],arr[n-i-1]);
        helper(i+1,arr,n);
    }
    void reverse(int arr[], int n){//only two arguments
        helper(0,arr,n);
    }
};
