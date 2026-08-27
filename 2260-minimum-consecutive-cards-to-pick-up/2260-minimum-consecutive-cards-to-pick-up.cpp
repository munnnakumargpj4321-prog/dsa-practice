class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int mini=INT_MAX;
        unordered_map<int,int>mp;
        for(int i=0;i<cards.size();i++){
            if(mp.find(cards[i])!=mp.end()){
                int ans=i-mp[cards[i]]+1;
                mini=min(ans,mini);
            }
            mp[cards[i]]=i;

        }   
        if(mini==INT_MAX){
            return -1;
        }
        return mini;
    }
};
// class Solution {
// public:
//     int minimumCardPickup(vector<int>& cards) {
//         int mini=cards.size()+1;
//         for(int i=0;i<cards.size();i++){
//             for(int j=i+1;j<cards.size();j++){
//                 if(cards[i]==cards[j]){
//                     int ans=j-i+1;
//                     mini=min(ans,mini);
//                 }

//             }
//             if(mini==cards.size()+1){
//                 return -1;
//             }
//         }   
//         return mini;
//     }
// };