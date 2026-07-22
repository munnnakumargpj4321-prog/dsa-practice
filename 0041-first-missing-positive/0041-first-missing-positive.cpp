class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mising=1;
        for(int num:nums){
            if(num==mising){
                mising++;
            }else if(mising<num){
                break;
            }
        }
        return mising;
        
    }
};