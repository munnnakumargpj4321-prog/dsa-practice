class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int >mp;
        for(auto num:nums){
            mp[num]++;
        }
        int ans=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(k==n||(mp[nums[i]]==1&&(k==1||i==0||i==n-1))){
                ans=max(ans,nums[i]);
            }
        }
        return ans;
    }
};