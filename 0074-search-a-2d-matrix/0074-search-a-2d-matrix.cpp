class Solution {
public:
    bool fun(vector<vector<int>>& nums, int target, int row) {
        int r=nums[0].size();
        int st=0,en=r-1;
        while(st<=en){
            int mid=st+(en-st)/2;
            if(target==nums[row][mid]){
                return true;
            }else if(target>nums[row][mid]){
                st=mid+1;
            }else{
                en=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int r=nums.size();
        int c=nums[0].size();
        int st=0,en=r-1;
        while(st<=en){
            int mid=st+(en-st)/2;
            if(target>=nums[mid][0]&&target<=nums[mid][c-1]){
                return fun(nums,target,mid);
            }else if(target>=nums[mid][c-1]){
                    st=mid+1;
            }else{
                    en=mid-1;
            }
            
        }
    return false;
    }
};