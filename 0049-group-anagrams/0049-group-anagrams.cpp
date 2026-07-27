class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>>ans;
        unordered_map<string ,vector<string>>mp;
        for(auto val:strs){
            string val2=val;
            sort(val2.begin(),val2.end());
            mp[val2].push_back(val);
        }
        for( auto &it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};

// ==================================================================================


// ==================================================================================




// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         int n=strs.size();
//         vector<vector<string>>ans(n);
//         int idx=0;
//         ans[idx].push_back({strs[idx]});
//         for(int i=1;i<n;i++){
//             int j=i+1;
//             while(j<n){
//                 string pre=strs[idx];
//                 string cur=strs[i];
//                 string sort1=pre;
//                 string sort2=cur;
//                 sort(sort1.begin(),sort1.end());
//                 sort(sort2.begin(),sort2.end());
//                 if(sort1==sort2){
//                     ans[idx].push_back({cur});
//                 }
//                 j++;
//             }
//             idx++;
//         }
//         return ans;
//     }
// };