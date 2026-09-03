class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int count1=0;
        int count2=0;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0){
                count1++;
            }
        }
        if(count1==n){
            return true;
        }
        for(int i=0;i<n;i++){
            if(nums1[i]%2!=0){
                count2++;
            }
        }
        if(count2==n){
            return true;
        }
        int mini=INT_MAX;
        for(int num:nums1){
            if(num%2!=0){
                mini=min(mini,num);
            }
        }
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0&&nums1[i]<mini){
                return false;
            }
        }
    return true;
    }
};