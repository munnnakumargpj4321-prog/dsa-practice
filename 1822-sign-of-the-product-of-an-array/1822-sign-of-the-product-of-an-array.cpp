class Solution {
public:
    int arraySign(vector<int>& nums) {
        int l=nums.size();
        int count=0;
        for(int i=0;i<l;i++){
            if(nums[i]<0){
                count++;
            }
            if(nums[i]==0){
                return 0;
            }
             
        }
        if(count%2==0){
            return 1;
        }else{
            return -1;
        }
 
    }
};