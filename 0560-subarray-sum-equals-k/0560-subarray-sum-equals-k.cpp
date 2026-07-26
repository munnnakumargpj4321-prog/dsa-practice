class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int n=nums.size();
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0;
        for(auto num:nums){
            sum+=num;
            if(mp.find(sum-k)!=mp.end()){
                count+=mp[sum-k];
            }
            mp[sum]++;
        }
     
        return count;
    }
};
// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int count=0;
//         int n=nums.size();
//         vector<int>prifix(n+1,0);
//         for(int i=0;i<n;i++){
//             prifix[i+1]=prifix[i]+nums[i];
//         }
//         for(int i=0;i<n;i++){
//             for(int j=i;j<n;j++){
//                 int sum=prifix[j+1]-prifix[i];
//                 if(sum==k){
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };
// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int count=0;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             int sum=0;
//             for(int j=i;j<n;j++){
//                 sum+=nums[j];
//                 if(sum==k)count++;
//             }
//         }
//         return count;
//     }
// };