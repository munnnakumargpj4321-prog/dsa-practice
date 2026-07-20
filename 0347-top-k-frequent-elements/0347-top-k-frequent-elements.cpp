class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int fre:nums){
            freq[fre]++;
        }
        vector<pair<int,int>>ans;
        for(auto val:freq){
            ans.push_back({val.second,val.first});
        }
        sort(ans.rbegin(),ans.rend());
        vector<int>result;
        for(int i=0;i<k;i++){
            result.push_back(ans[i].second);
        }
        return result;
        
    }
};