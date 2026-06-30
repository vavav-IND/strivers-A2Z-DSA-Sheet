class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int minindex=i;                     //assume the smallest element is the first one
            for(int j=i+1; j<nums.size(); j++){ //j=i+1; because the array keep sgetting smaller with every pass
                if(nums[j]<nums[minindex]){     //compare it with rest of the array
                    minindex=j;
                }
            }
            swap(nums[i],nums[minindex]);       //then swap if u got smaller element
        }
        return nums;
    }
};