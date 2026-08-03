class Solution {
public:
    void subset(vector<int>&nums,vector<vector<int>>&ans,vector<int>&ans2,int i){
        if(i==nums.size()){
            ans.push_back(ans2);
            return ;
        }
        ans2.push_back(nums[i]);
        subset(nums,ans,ans2,i+1);
        ans2.pop_back();
        int idx=i+1;
        while(idx<nums.size()&&nums[idx]==nums[idx-1]){
            idx++;
        }
        subset(nums,ans,ans2,idx);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>ans2;
        subset(nums,ans,ans2,0);
        return ans;
    }
};