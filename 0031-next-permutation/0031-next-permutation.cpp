class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pi=-1;
        int l=nums.size();
        for(int i=l-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pi=i;
                break;
            }
        }
        if(pi==-1){
            sort(nums.begin(),nums.end());
            return;
        }
        for(int i=l-1;i>pi;i--){
            if(nums[i]>nums[pi]){
                swap(nums[i],nums[pi]);
                break;
            }
        }
        reverse(nums.begin()+pi+1,nums.end());
        // int i=pi;      
        // int j=l-1;
        // while(i<=j){
        //     if(nums[i]<nums[j]){
        //         swap(nums[i],nums[j]);
        //         i++;
        //         j--;
        //     }
        // }
        
    }
};