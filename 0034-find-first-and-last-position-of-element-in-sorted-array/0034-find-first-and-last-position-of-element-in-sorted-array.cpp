class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=nums.size();
        int first=-1;
        int second=-1;
        int start=0,end=l-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                first=mid;
                end=mid-1;
            }else if( nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        int s=0,e=l-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                second=mid;
                s=mid+1;
            }else if( nums[mid]<target){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        // vector<int>ans;
        // ans.push_back(first);
        // ans.push_back(second);
        // return ans;
        return {first,second};
    }
};