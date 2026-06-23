class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int temp=nums[0];
        for(int i=1; i<nums.size(); i++){
            nums[i-1]=nums[i];
        }
        nums[(nums.size())-1]=temp;
    }
};

//time complexity: O(n)
//space complexity: O(n)
//extra space: O(1); to solve the algorithm we are using the array so the used in-algorithm is O(n) but 
//otherwise the space complexity we get by solving it is O(1)
