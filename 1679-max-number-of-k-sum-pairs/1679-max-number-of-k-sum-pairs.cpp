
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count=0;
        int n=nums.size();
        sort(nums.begin(),nums.end()); 
        int j=0,l=n-1;
        while(j<l){
            int sum=nums[j]+nums[l];
            if(sum==k){
                count++;
                j++,l--;
            }else if(sum>k){
                l--;
            }else{
                j++;
            }
        }
        return count;
    }
};