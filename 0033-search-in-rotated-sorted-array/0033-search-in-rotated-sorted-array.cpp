// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int l=nums.size();
//         for(int i=0;i<l;i++){
//             if(nums[i]==target){
//                 return i;
//             }
//         }
//         return -1;
        
//     }
// };
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=nums.size();
        int s=0,e=l-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                    return mid;
            }
            if(nums[s]<=nums[mid]){//left
                if(nums[s]<=target&&target<=nums[mid]){
                    e=mid-1;
                }else{
                    s=mid+1;
                }
            }else{
                if(nums[mid]<=target&&target<=nums[e]){
                    s=mid+1;
                }else{
                    e=mid-1;
                }
            }  
        

        }
        return -1;
        
    }
};
