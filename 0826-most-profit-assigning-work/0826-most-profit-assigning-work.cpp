class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>ans;
        for(int i=0;i<difficulty.size();i++){
            ans.push_back({difficulty[i],profit[i]});
        }
        sort(ans.begin(),ans.end());
        sort(worker.begin(),worker.end());
        int i=0;
        int sum=0;
        int maxi=0;
        for(int difficult:worker){
            while(i<ans.size()&&ans[i].first<=difficult){
                maxi=max(maxi,ans[i].second);
                i++;
            }
            sum+=maxi;
        }
        return sum;
        
    }
};