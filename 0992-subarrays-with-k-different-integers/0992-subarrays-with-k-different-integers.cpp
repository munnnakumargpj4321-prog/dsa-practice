class Solution {
public:
    int fun(vector<int>&nums,int k){
        int left=0;
        long long  ans=0;
        unordered_map<int ,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            while(mp.size()>k){
                mp[nums[left]]--;
                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                }
                left++;
            }
            ans+=i-left+1;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return fun(nums,k)-fun(nums,k-1);
    }
};


// class Solution {
// public:
//     void fun(unordered_map<int,int>&mp,vector<int>&nums,int k ,int& count,int idx){
//         if(idx>=nums.size()){
//             return;
//         }
//         mp[nums[idx]]++;
//         if(mp.size()==k){
//             count++;
//         }
//         fun(mp,nums,k,count,idx+1);
//     }
//     int subarraysWithKDistinct(vector<int>& nums, int k) {
//         int count=0;
//         for(int i=0;i<nums.size();i++){
//             unordered_map<int,int>mp;
//             fun(mp,nums,k,count,i);
//         }
//         return count;
//     }
// };