class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;

        }
        for(auto it :mp){
            auto temp= upper_bound(nums.begin(),nums.end(),it.first);
            int greater=nums.end()-temp;
            if(greater>=k)ans+=it.second;
        }
        return ans;
    }
};