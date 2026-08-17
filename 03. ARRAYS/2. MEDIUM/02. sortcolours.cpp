class Solution {
public:
    void sortColors(vector<int>& nums) {
        int x=0, y=0, z=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                x++;
            }
            else if(nums[i]==1){
                y++;
            }
            else{
                z++;
            }
        }

        /*for(int j=0; j<=x; j++){//need to run 0 x times
            nums[j]=0;
        }
        for(int k=x+1; k<=y; k++){//need to run 1 y times
            nums[k]=1;
        }
        for(int l=y+1; l<=z; l++){//need to run 2 z times
            nums[l]=2;
        }

        wrong code as we account the time loop runs as the index and the starting point and end point has errors*/
        int index=0;
        
        for(int j=0; j<x; j++){
            nums[index++]=0;//increaments index after putting value
        }
        for(int j=0; j<y; j++){
            nums[index++]=1;
        }
        for(int j=0; j<z; j++){
            nums[index++]=2;
        }
    }
};

//Dutch national flag algo
class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){
                if(nums[mid]==0){
                    swap(nums[mid], nums[low]);
                    low++;
                    mid++;
                }
                else if(nums[mid]==1){
                
                    mid++;
                }

                else{
                    swap(nums[mid], nums[high]);
                    high--;
                }
        }
    }
};