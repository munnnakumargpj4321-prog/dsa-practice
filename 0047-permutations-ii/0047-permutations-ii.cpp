class Solution {
public:
    void permu(vector<int>&nums,vector<vector<int>>&ans,int idx){
        if(idx==nums.size()){
            ans.push_back(nums);
            return;
        }
        unordered_set<int>setfun;
        for(int i=idx;i<nums.size();i++){
            if(setfun.count(nums[i])){
                continue;
            }
            setfun.insert(nums[i]);
            swap(nums[i],nums[idx]);
            permu(nums,ans,idx+1);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       vector<vector<int>>ans;
       permu(nums,ans,0);
       return ans;      
    }
};