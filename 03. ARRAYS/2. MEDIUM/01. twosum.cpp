//brute approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                int k=nums[i]+nums[j];
                if(k==target){
                    return{i,j};
                }
            }
        }
        return {-1,-1};
    }
};

//better approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            int complement= target-nums[i];
            if(mp.find(complement)!=mp.end()){//complement does not equal to not found
                return{mp[complement], i};//return the index(value) stored in complement(key)
            }
            mp[nums[i]]=i;//store the index to later find the complement in the map
        }
        return{-1,-1};
    }
};

//optimal approach
