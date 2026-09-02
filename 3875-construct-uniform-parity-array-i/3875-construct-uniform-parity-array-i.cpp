class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int count1=0;
        for(int num:nums1){
            if(num%2==0){
                count1++;
            }
        }
        if(count1==n){
            return true;
        }
        int count2=0;
        for(int num:nums1){
            if(num%2!=0){
                count2++;
            }
        }
        if(count2==n){
            return true;
        }
        if(count1>0&&count2>0){
            return true;
        }
        return false;

    }
};