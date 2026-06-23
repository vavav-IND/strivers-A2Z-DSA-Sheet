class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int l=nums[0];
        int sl=-1;     //handles the test case where all the elements are same
        for(int i=1; i<nums.size(); i++){
            
            if(nums[i]>l){//compare each element with the largest and then update l
                sl=l;
                l=nums[i];
            }
            else if(nums[i]>sl && nums[i]!=l){//if last element is larger than sl but smaller than l;[10,5,8]
                sl=nums[i];
            }
        }
        return sl;
    }
};