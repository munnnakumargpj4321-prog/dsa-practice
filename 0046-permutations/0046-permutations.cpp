class Solution {
public:

    void permu(vector<int>& nums,vector<vector<int>>&ans,int idx) {
        if(idx==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[i],nums[idx]);
            permu(nums,ans,idx+1);
            swap(nums[i],nums[idx]);//backtracking 
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        permu(nums,ans,0);
        return ans;
    }
};

//if there are any thing that is not important then you may not need of that bro  that thing bro first off all  could you solve that bro in first time is then 