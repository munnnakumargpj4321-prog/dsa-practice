class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<mini){
                mini=nums[i];
            }
            if(nums[i]>maxi){
                maxi=nums[i];
            }
        }
        int firstindex=0;
        int secondindex=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==mini){
                firstindex=i;
            }
            if(nums[i]==maxi){
                secondindex=i;
            }
        }
        int n=nums.size();
        int leftremove=0;
        int rightremove=0;
        int bothsideremove=0;
        leftremove=max(firstindex,secondindex)+1;
        rightremove=n-min(firstindex,secondindex);
        bothsideremove=min(firstindex, secondindex) + 1 +
        n - max(firstindex, secondindex);
        return min(leftremove,min(rightremove,bothsideremove));
    }
};