class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<4)return 0;
        int n=nums.size();
        // int small=nums[0];
        // int large=nums[n-1];
        int ans=INT_MAX;
        int count=0;
        while(count<=3){
            // nums[n-1]=nums[0];
            int maxi=nums[n-4+count];
            int mini=nums[count];
            ans=min(ans,maxi-mini);
            count++;
            // n--;
        }
        // int maxi=*max_element(nums.begin(),nums.end());
        // int mini=*min_element(nums.begin(),nums.end());
        // return maxi-mini;
        return ans;
    }
};