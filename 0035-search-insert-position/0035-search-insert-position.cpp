class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=nums.size();
        int s=0,e=l-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]<target){
                s=mid+1;
            }else if(nums[mid]>target){
                e=mid-1;
            }else{
                return mid;
            }
        }
    return s;
        
    }
};