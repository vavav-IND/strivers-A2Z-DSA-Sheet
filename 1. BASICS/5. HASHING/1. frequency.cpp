class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        //pre-compute
        map<int,int>mpp;//each map entry is stored as a pair
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;//updates the frequency 
        }

        //iterate in map
        //it is the pair. it stores key and value.
        //it.first: key and it.second: value

        vector<vector<int>>ans;
        for(auto it: mpp){
           // cout << it.first << "->" << it.second << endl;[when we need to print]
            ans.push_back({it.first, it.second});
            //ans only accepts vector<int> form of a argument
            //so if we dont put the values inside the bracket 
            //it'll pass as two arguments and give compilation error
        }

        return ans;
    }
};
