class Solution {
public:
    void fun(vector<int>&nums,vector<vector<int>>&ans,vector<int>temp,int idx){
        // if(temp.size()>=2){
        //     ans.push_back(temp);
        // }
        unordered_set<int>temp2;
        for(int j=idx;j<nums.size();j++){
            if(temp.size() > 0 && nums[j] < temp.back())continue;
            if(temp2.count(nums[j]))continue;
            temp2.insert(nums[j]);
            temp.push_back(nums[j]);
            if(temp.size()>=2){
                ans.push_back(temp);
            }
            fun(nums,ans,temp,j+1);
            temp.pop_back();
        }

    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        fun(nums,ans,temp,0);
        // for(int i=0;i<nums.size();i++){
        //     vector<int>temp;
        //     for(int j=i;j<nums.size();j++){
        //         if(temp.size() > 0 && nums[j] < temp.back())continue;
        //         temp.push_back(nums[j]);
        //         if(temp.size()>=2){
        //             ans.push_back(temp);
        //         }
        //     }
        // }
        return ans;
    }
};