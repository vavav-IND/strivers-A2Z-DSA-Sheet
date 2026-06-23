class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;                        //two pointer method
        for(int j=0; j<nums.size();j++){
            if(nums[i]!=nums[j]){         
                nums[i+1]=nums[j];        //shift the j pointer element to one ahead of i to get the uniqure elements at the starting of the array
                i++;                    //shift i to move to the next element and compare 
            }
        }
        return i+1;                     //the unique elements will be stored till index i; therefore no. of unique elements is i+1
    }
};