class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xo =0;
        int n=nums.size();
        bool flag=false;
        for(int i=0;i<nums.size();i++){
            xo^=nums[i];
            if(nums[i]!=0){
                flag=true;
            }
        }
        if(xo!=0){
            return n;
        }
        if(flag){
            return n-1;
        }
      return 0;
    }
};  
//==================================================================================
// class Solution {
// public:
//     int longestSubsequence(vector<int>& nums) {
//         int count=0;
//         int xo =0;
//         bool flag=false;
//         for(int i=0;i<nums.size();i++){
//             xo^=nums[i];
//             if(nums[i]!=0){
//                 flag=true;
//             }
//         }
//         if(xo!=0)return nums.size();
//         if(flag)return nums.size()-1;
//         return 0;
//     }
// };