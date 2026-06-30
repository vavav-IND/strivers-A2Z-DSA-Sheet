//brute-force method
/*class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
       for(int i=0; i<nums.size(); i++){
            if(nums[i]>=x){
            return i;
            }
       }
    }
}; */

//optimal solution
class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
       int i=0;             //lower pointer
       int j=nums.size()-1; //upper pointer
       int ans=nums.size();
       int m=(i+(j-i)/2);   //works for both odd and even
       while(i<=j){
            m=(i+(j-i)/2);  //update m for every iteration

            if(nums[m]>=x){ //write the condition that u want to be true in if statement
                ans=m;      //temporarily save the index and look for further lower index
                j=m-1;      //move the pointer to one less than the midpoint eliminating the entire right side
            }
            else{
                i=m+1;      //move the lower pointer one ahead the midpoint as we want the lower bound
                            //and we dont need to save the ans here because only (nums[m]>=x) is a valid condition
            }
       }
       return ans;
    }
};