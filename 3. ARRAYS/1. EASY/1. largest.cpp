class Solution {
public:
    int largestElement(vector<int>& nums) {
        int l=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                l=nums[i];
            }
        }
        return l;
    }
};