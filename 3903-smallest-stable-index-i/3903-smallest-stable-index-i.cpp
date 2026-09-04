class Solution {
public:
    int maxvlaue(vector<int>&nums,int i,int j){
        int maxi=INT_MIN;
        for(int x=i;x<j;x++){
            maxi=max(nums[x],maxi);
        }
        return maxi;
    }
    int minvlaue(vector<int>&nums,int i,int j){
        int mini=INT_MAX;
        for(int x=i;x<j;x++){
            mini=min(nums[x],mini);
        }
        return mini;
    }
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            int leftmax=maxvlaue(nums,0,i+1);
            int rightmax=minvlaue(nums,i,n);
            if((leftmax-rightmax)<=k){
                return i;
            }
        }
        return -1;


    }
};