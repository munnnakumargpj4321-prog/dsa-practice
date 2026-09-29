class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        // unordered_map<int,int>ans1;
        unordered_map<int,int>ans2;
        unordered_map<int,int>ans3;
        // for(auto val:nums1){
            // ans1[val]++;
        // }
        for(auto val:nums2){
            ans2[val]++;
        }
        int i=0;
        for(auto val:nums1){
            if(/*ans1.find(val)!=ans1.end()&&*/ans2.find(val)!=ans2.end()&&ans3.find(val)==ans3.end()){
                ans3[val]++;
            }
        }
        // for(auto val:nums2){
        //     if(ans1.find(val)!=ans1.end()&&ans2.find(val)!=ans2.end()&&ans3.find(val)==ans3.end()){
        //         ans3[val]++;
        //     }
        // }
        vector<int>result;
        for(auto val:ans3){
            result.push_back(val.first);
        }
        return result;
    }
};