class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=nums[0];
        int mini=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int a=nums[i];
            int first=a*maxi;
            int second=a*mini;
            maxi=max(a,max(first,second));
            mini=min(a,min(first,second));
            ans=max(ans,maxi);
        }
        return ans;
    }
};