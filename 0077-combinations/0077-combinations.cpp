class Solution {
public:
    void isvalid(int n,int k, vector<vector<int>>&ans,vector<int>&ans2,int idx){
        if(ans2.size()==k){
            ans.push_back(ans2);
            return;
        }
        for(int i=idx;i<=n;i++){
            ans2.push_back(i);
            isvalid(n,k,ans,ans2,i+1);
            ans2.pop_back();

        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
       vector<int>ans2;
       isvalid(n,k,ans,ans2,1);
        return ans;
    }
};