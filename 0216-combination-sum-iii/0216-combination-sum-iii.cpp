class Solution {
public:
     void isvalid(vector<int>&ans,vector<vector<int>>&ans2,vector<int>&ans3,int k,int target,int idx){
        if(ans3.size()==k){
            if(target==0){
                ans2.push_back(ans3);
            }
            return;
        }
        if(target<0){
            return;
        }
        for(int i=idx;i<ans.size();i++){
            ans3.push_back(ans[i]);
            isvalid(ans,ans2,ans3,k,target-ans[i],i+1);
            ans3.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>ans={1,2,3,4,5,6,7,8,9};
        vector<vector<int>>ans2;
        vector<int>ans3;
        isvalid(ans,ans2,ans3,k,n,0);
        return ans2;
    }
};