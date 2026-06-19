class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        map<int,int>m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        int maxfreq=0;
        int ans=0;
        for(auto it: m){
            if(it.second>maxfreq){//since map stores elements in sorted manner
                                  //we just need to check if freq is greater than maxfreq
                maxfreq=it.second;
                ans=it.first;
            }

        }
        return ans;
    }
};

//Time complexity: O(nlogn)
//Space complexity: O(k); k:no of distinct elements
