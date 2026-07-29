class Solution {
public:
    int minMoves(vector<int>& nums) {
        int  n= nums.size();
        int maxi=0;
        int count=0;

        for(auto num:nums){
            maxi=max(maxi,num);
        }
        for(auto num:nums){
            count+=(maxi-num);
        }
        return count;
        
    }
};