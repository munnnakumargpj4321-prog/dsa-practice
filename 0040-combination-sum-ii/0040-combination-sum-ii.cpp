class Solution {
public:
    void sub(vector<int>& candidates,vector<vector<int>>&ans,vector<int>&ans2,int target,int idx){
        if(target==0){
            ans.push_back(ans2);
            return;
        }
        if(target<0||idx>=candidates.size()){
            return;
        }
        for(int i=idx;i<candidates.size();i++){
            if(i>idx&&candidates[i]==candidates[i-1]){
                continue;
            }
            if(candidates[i]>target){
                break;
            }
            ans2.push_back(candidates[i]);                                 
            sub(candidates,ans,ans2,target-candidates[i],i+1);
            ans2.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(),candidates.end());
     vector<vector<int>> ans;  
     vector<int>ans2;
     sub(candidates,ans,ans2,target,0);
     return ans;   
    }
};

