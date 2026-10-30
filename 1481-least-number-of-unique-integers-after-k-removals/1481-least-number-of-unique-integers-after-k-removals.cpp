class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto val:arr){
            mp[val]++;
        }
        vector<pair<int,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.second<b.second;
        });
        int count=v.size();
        for(auto &val:v){
            if(k>=val.second){
                k-=val.second;
                count--;
            }else{
                break;
            }
        }
        return count;
    }
};