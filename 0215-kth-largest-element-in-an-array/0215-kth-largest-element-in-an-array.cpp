class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long count=0;
        int l=nums.size();
        for(int i=l-1;i>=0;i--){
            count++;
            if(count==k){
                return nums[i];
            }
        }
        
        return -1;
    }
};