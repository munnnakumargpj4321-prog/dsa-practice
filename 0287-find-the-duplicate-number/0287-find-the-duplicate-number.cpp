class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         unordered_set<int>ans;
//         int  l= nums.size();
//         for(int i=0;i<l;i++){
//             if(ans.find(nums[i])!=ans.end()){
//                 return nums[i];
//             }
//             ans.insert(nums[i]);
//         }
//         return -1;
//     }
// };