class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int  opretations=0;
        int l= nums.size();
        for(int i=1;i<l;i++){
            if(nums[i]<=nums[i-1]){
                int diff=nums[i-1]-nums[i]+1;
                opretations+=diff;
                nums[i]+=diff;
            }
        }
        return opretations;
    }
};