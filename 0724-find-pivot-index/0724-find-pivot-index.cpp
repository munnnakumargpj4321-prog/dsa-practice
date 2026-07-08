class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        long long sum=0;
        int l=nums.size();
        for(int num:nums){
            sum+=num;
        }
        long long left=0;
        long long right=0;
        for(int i=0;i<l;i++){
            right=sum-left-nums[i];
            if(left==right){
                if(i==0){
                    return 0;
                }
                return i;
            }
            left+=nums[i];
        }
        return -1;
    }
};