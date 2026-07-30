class Solution {
public:
    int longestContinuousSubstring(string s) {
        int l=s.size();
        int  count=1;
        int maxi=1;
        for(int i=1;i<l;i++){
            if(s[i]==s[i-1]+1){
                count++;
            }else{
                count=1;
            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};
// class Solution {
// public:
//     int longestContinuousSubstring(string s) {
//         int cur=1;
//         int maxi=1;
//         for(int i=1;i<s.size();i++){
//             if(s[i]!=s[i-1]+1){
//                 cur++;
//             }else{
//                 cur=1;
//             }
//             maxi=max(maxi,cur);
//         }
//         return maxi;
        
//     }
// };