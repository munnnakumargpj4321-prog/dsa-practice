class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
     int i=0;
     int j=0;
     int length=0;
     int maxi=0;
    int count=0;
    while(i<nums.size()){
         if(nums[i]==0)count++;
        while(count>k){
            // if(nums[j]==0){
                // count++;
            // }
            // i++;
            if(nums[j]==0)count--;
            j++;
        }
        length=i-j+1;
        maxi=max(maxi,length);
        i++;
    }
    return maxi;
    }
};