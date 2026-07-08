class Solution {
public:
    int countGroups(vector<int>& nums, long long limit){
        int group=1;
        long long countgroup=0;
        for(int num:nums){
            if(countgroup+num>limit){
                group++;
                countgroup=num;
            }else{
                countgroup+=num;
            }
        }
        return group;

  }
    int splitArray(vector<int>& nums, int k) {
        long long low=0;
        long long high=0;
        for(int num:nums){
            low=max(low,(long long)num);
            high+=num;
        }
        while(low<=high){
            long long mid=low+(high-low)/2;
            long groups=countGroups(nums,mid);
            if(groups<=k){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;

        
    }
};