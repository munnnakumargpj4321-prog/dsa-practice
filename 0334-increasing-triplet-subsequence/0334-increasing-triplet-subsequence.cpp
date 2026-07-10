class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        long long small=INT_MAX;
        long long big=INT_MAX;
        for(int n: nums){
            if(n<=small){
                small=n;
            }else if(n<=big){
                big=n;
            }else{
                return true;
            }
        }
        return false;
    }
};
// class Solution {
// public:
//     bool increasingTriplet(vector<int>& nums) {
//         int l=nums.size();
//         for(int i=1;i<l-1;i++){
//             if(nums[i-1]<nums[i]&&nums[i]<nums[i+1]){
//                 return true;
//             }
//         }
//         return false;
//     }
// };
