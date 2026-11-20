class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        vector<string>ans;
        // for(int i=0;i<words.size();i++){
        //     string temp="";
        //     for(int j=0;j<words[i].size();j++){
        //         temp+=words[i][j];
        //     }
        //     mp[temp]++;
        // }
        for(auto num:words){
            mp[num]++;
        }
        vector<pair<string,int>> temp(mp.begin(),mp.end());
        sort(temp.begin(),temp.end(),[](auto &a,auto &b){
            if(a.second == b.second){
                return a.first < b.first;
            }
            return a.second>b.second;
        });
        if(k>temp.size())return ans;
        for(int i=0;i<k;i++){
            ans.push_back(temp[i].first);
        }
        
        return ans;
    }
};