class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=nums.size();
        vector<int>ans1;
        for(int i=1;i<l;i++){
            if(nums[i]==nums[i-1]){
                ans1.push_back(nums[i]);
            }
        }
        return ans1;
        
    }
};
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         int l=nums.size();
//         vector<int>ans1;
//         for(int i=0;i<l;i++){
//             for(int j=i+1;j<l;j++){
//                 if(nums[i]==nums[j]){
//                     ans1.push_back(nums[i]);
//                 }
//             }
//         }
//         return ans1;
        
//     }
// };