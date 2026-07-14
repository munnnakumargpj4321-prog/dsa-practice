class Solution {
public:
    int specialArray(vector<int>& nums) {
        int l=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<=l;i++){ 
            int count=0;
            for(int num:nums){
                if(i<=num){
                    count++;
                }
            }
            if(count==i)return i;
        }
        return -1;
    }
};