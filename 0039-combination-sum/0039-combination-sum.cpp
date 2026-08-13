class Solution {
public:
    void combination(vector<int>&candidates,vector<vector<int>>&ans,vector<int>&result,int target,int idx){
        if(idx==candidates.size()||target<0){
            return;
        }
        if(target==0){
            ans.push_back(result);
            return;
        }
        result.push_back(candidates[idx]);
        // combination(candidates,ans,result,target-candidates[idx],idx+1);
        combination(candidates,ans,result,target-candidates[idx],idx);
        result.pop_back();
        combination(candidates,ans,result,target,idx+1);
     
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>result;
        combination(candidates,ans,result,target,0);
        return ans;
    }
};