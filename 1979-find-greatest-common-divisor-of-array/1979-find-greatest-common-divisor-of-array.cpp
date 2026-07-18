class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=maxi){
                maxi=nums[i];
            }
            if(nums[i]<=mini){
                mini=nums[i];
            }
        }
        int maxi2=0;
        for(int i=1;i<=maxi;i++){
            if(maxi%i==0&&mini%i==0){
                maxi2=max(maxi2,i);
            }
        }
        return maxi2;
    }
};