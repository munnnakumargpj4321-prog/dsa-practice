class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count=0;
       unordered_map<int,int>mp;
        for(int i=0;i<time.size();i++){
            int rem=time[i]%60;
            int  rem2=(60-rem)%60;
            count+=mp[rem2];
            mp[rem]++;
               
            
        }
        return count;
    }
};
// class Solution {
// public:
//     int numPairsDivisibleBy60(vector<int>& time) {
//         int count=0;
       
//         for(int i=0;i<time.size();i++){
//             int j=i+1;
//             while(j<time.size()){
//                 if((time[i]+time[j])%60==0){
//                     count++;
//                 }
//                 j++;
//             }
//         }
//         return count;
//     }
// };