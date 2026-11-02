class Solution {
public:
    int sortPermutation(vector<int>& nums) {
         int count=-1;
         for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                count=count&nums[i];
            }
         }
         return (count==-1)?0:count;
    }
};