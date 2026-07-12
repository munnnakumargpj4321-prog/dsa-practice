class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int l=nums.size();
        vector<int>ans;
        for(int i=0;i<l;i++){
            long long count=0;
            for(int j=0;j<l;j++){
                if(nums[j]<nums[i]){
                count++;
                }
            }
            ans.push_back(count);
        }

        return ans;
        
    }
};