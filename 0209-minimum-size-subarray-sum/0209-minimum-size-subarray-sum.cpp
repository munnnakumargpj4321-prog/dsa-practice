class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=nums.size();
        for(int i=0;i<l;i++){
            if(nums[i]==target){
                return 1;
            }
        } 
        int left=0;
        int right=0;
        int mini=INT_MAX;
        long long sum=0;
        for (int right = 0; right < l; right++) {
                sum += nums[right]; 
            while(sum>=target){
                mini=min(mini,right-left+1);
                sum=sum-nums[left];
                left++;
            }
        }
        return(mini==INT_MAX)?0:mini;
    }
};
