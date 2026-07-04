class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=nums.size();
        for(int i=0;i<l-1;i++){
            for(int j=0;j<l-i-1;j++){
                if(nums[j]==0){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        
    }
};