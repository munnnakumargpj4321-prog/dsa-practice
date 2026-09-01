class Solution {
public:
    // bool isvalid(vector<int>&nums,int i,int j){
    //  return nums[i]+nums[j-1]>nums[j];
    // }
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]+nums[j]>nums[k]){
                        count++;
                    }
                }
            }
        }
    return count;
    }
};
// class Solution {
// public:
//     bool isvalid(vector<int>&nums,int i,int j){
//      return nums[i]+nums[j-1]>nums[j];
//     }
//     int triangleNumber(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int i=0,j=2;
//         int count=0;
//         while(j<nums.size()){
//             bool result=isvalid(nums,i,j);
//             if(result==true){
//                 count++;
//                 i++,j++;
//             }else{
//                 j++;
//             }

//         }
//     return count;
//     }
// };