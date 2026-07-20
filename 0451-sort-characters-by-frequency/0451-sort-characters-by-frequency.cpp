class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>ans;
        for(auto val:s){
            ans[val]++;
        }
        vector<pair<int ,char>>ans2;
        string s2;
        for(auto val2:ans){
            ans2.push_back({val2.second,val2.first});
        }
        sort(ans2.rbegin(),ans2.rend());
        for(auto val3:ans2){
            s2.append(val3.first,val3.second);
        }
        return s2;
        
    }
};