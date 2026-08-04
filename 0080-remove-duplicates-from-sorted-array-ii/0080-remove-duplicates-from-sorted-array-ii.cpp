class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2){
            return nums.size();
        }
        int count=2;
        for(int i=2;i<nums.size();i++){
            if(nums[i]!=nums[count-2]){
                nums[count]=nums[i];
                count++;
            }
        }
        return count;
    }
};
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         if(nums.size()<=2){
//             return nums.size();
//         }
//         int count=1;
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]==nums[i-1]){
//                 count++;
//             }else{
//                 count=1;
//             }
//             if(count>2){
//                 nums.erase(nums.begin()+i);
//                 i--;
//                 count--;
//             }
//         }
//         return nums.size();
//     }
// };