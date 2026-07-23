class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long opretion=0;
        int l=nums.size();
        long long prev=nums[l-1];
        for(int i=l-2;i>=0;i--){
            if(nums[i]<=prev){
                prev=nums[i];
            }else{
                long long divided=(nums[i]+prev-1)/prev; 
                opretion+=divided-1;
                prev=nums[i]/divided;  
            }
        }
        return opretion;
    }
};
