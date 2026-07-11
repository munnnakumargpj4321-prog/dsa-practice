class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int s=0;
        // int l=nums.size()-1;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==val){
        //         swap(nums[i],nums[l-i]);
        //     }
        // }
        // for(int num:nums){
        //     if(num!=val){
        //         ans.push_back(num);
        //     }
        // }
        // int k=ans.size();
        // return k;    
        
        int k=0;
        for(int num:nums){
            if(num!=val){
                nums[k]=num;
                k++;
            }
        }
        return k;    
    }
};
