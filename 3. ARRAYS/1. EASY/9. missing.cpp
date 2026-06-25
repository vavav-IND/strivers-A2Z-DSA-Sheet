class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s=0, sum=0;//initialize the variables separately
        sum=((nums.size())*(nums.size()+1))/2;//cannot use square brackets for arithmetic operations
        for(int i=0; i<nums.size(); i++){
            s=s+nums[i];
        }
        int x=sum-s;
        return x;
    }
};