class Solution {
public:
    void subset(vector<int>& nums,vector<vector<int>>&ans,vector<int>ans2,int i){
        if(i==nums.size()){
            ans.push_back(ans2);           
            return;
        }
        ans2.push_back(nums[i]);
        subset(nums,ans,ans2,i+1);
        ans2.pop_back();
        subset(nums,ans,ans2,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ans2;
        subset(nums,ans,ans2,0);
        return ans;
    }
};