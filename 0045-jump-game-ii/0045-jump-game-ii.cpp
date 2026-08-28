class Solution {
public:
    int jump(vector<int>& nums) {
        int l=nums.size();
        int idx=0;
        int current=0;
        int jump=0;
        for(int i=0;i<l-1;i++){
            idx=max(idx,i+nums[i]);
            if(i==current){
                jump++;
                current=idx;
            }

        }
        return jump;
        
    }
};