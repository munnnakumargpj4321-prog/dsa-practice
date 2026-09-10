class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            bool divide=true;
            int j=0;
            while(j<numsDivide.size()){
                if(numsDivide[j]%num!=0){
                    divide=false;
                    break;
                }
                j++;
            }
            if(j==numsDivide.size())return i;
            while(i+1<nums.size()&&nums[i]==nums[i+1]){
                i++;
            }
        }
        return -1;
    }
};