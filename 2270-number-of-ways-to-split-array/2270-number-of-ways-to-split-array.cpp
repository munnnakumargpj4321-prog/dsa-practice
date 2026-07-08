class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum=0;
        int count =0;
        int l=nums.size();
        for(int num : nums){
            sum+=num;
        }
        long long  left=0;
        long long  right=0;
        for(int i=0;i<l-1;i++){
            left=left+nums[i];
            right=sum-left;
            if(left>=right){
                count ++;
            }
        }
        return count;
    }
};