class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>ans;
        for(auto row:grid){
            for(auto num:row){
                ans.push_back(num);
            }
        }
        int reminder=ans[0]%x;
        for(auto rem:ans){
            if(rem%x!=reminder){
                return -1;
            }
        }
        sort(ans.begin(),ans.end());
        int target =ans[ans.size()/2];
        int count=0;
        for(auto val:ans){
            count+=abs(val-target)/x;
        }
        return count;

    }
};