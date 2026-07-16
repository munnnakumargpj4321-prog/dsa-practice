class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
      int l=nums.size();
      int left=0;
      int right=l-1;
      while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]==target){
            return true;
        }
        if(nums[mid]<target){
            left=mid+1;
        }else{
            right=mid-1;
        }
      }
      return false;
        
    }
};
// class Solution {
// public:
//     bool search(vector<int>& nums, int target) {
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==target){
//                 return true;
//             }
//         }
//         return false;
        
//     }
// };