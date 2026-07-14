class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int maxi=0;
        int first=0;
        int second=0;
        int l=nums.size();
        for(int i=0;i<l;i++){
            if(nums[i]<0){
                first++;
            }
            if(nums[i]>0){
                second++;
            }
        }
        maxi=max(first,second);
        return maxi;
        
    }
};