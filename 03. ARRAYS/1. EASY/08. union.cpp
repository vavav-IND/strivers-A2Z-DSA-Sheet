//brute force solution
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        set<int>st;
        for(int i=0; i<nums1.size(); i++){
           st.insert(nums1[i]);
        } 

        for(int j=0; j<nums2.size(); j++){
            st.insert(nums2[j]);
        }

        vector<int> ans;
        for(auto x: st){
            ans.push_back(x);
        }
        return ans;
    }
};

//optimal solution
class Solution{
    public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        vector<int> ans;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<=nums2[j]){
                if(ans.size()==0 || ans.back()!=nums1[i]){
                ans.push_back(nums1[i]);
            }
            i++;
            }
            

            else{
                if(ans.size()==0 || ans.back()!=nums2[j]){
                    ans.push_back(nums2[j]);
                }
                j++;
            }
            
        }
        while(j<nums2.size()){
            if(ans.size()==0 || ans.back()!=nums2[j]){
                 ans.push_back(nums2[j]);
            }
            j++;
        }

        while(i<nums1.size()){
            if(ans.size()==0 || ans.back()!=nums1[i]){
                ans.push_back(nums1[i]);
            }
            i++;
        }

        return ans;
    }
};