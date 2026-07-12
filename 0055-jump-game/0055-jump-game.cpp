class Solution {
public:
    bool canJump(vector<int>& nums) {
        int  idx=0;
        int l=nums.size();
        for(int i=0;i<l;i++){
            if(i>idx)return false;
            idx=max(idx,i+nums[i]);
        }
        return true;
    }
};