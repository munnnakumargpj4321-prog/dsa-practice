class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>ans;
        int maxi=0;
        int left=0;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
            while(ans[nums[i]]>k){
                ans[nums[left]]--;
                left++;
            }
            maxi=max(maxi,i-left+1);
        }
        return maxi;
    }
};