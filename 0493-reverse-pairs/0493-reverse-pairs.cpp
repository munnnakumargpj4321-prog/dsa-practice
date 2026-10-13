class Solution {
public:
    void merge(vector<int>&nums,int start,int mid,int end,int& count){
        int l=mid+1;
        for(int i=start;i<=mid;i++){
            while(l<=end&&(long long)nums[i]>2LL * nums[l]){
                l++;
            }
            count+=l-(mid+1);
        }
        int i=start;
        int j=mid+1;
        vector<int>temp;
        while(i<=mid&&j<=end){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i++]);
            }else{
                temp.push_back(nums[j++]);
            }
        }
        while(i<=mid){
            temp.push_back(nums[i++]);
        }
        while(j<=end){
            temp.push_back(nums[j++]);
        }
        for(int k=0;k<temp.size();k++){
            nums[start+k]=temp[k];
        }
    }
    void mergesort(vector<int>&nums,int start,int end,int& count){
        if(start<end){
            int mid=start+(end-start)/2;
            mergesort(nums,start,mid,count);
            mergesort(nums,mid+1,end,count);
            merge(nums,start,mid,end,count);
        }   
    }
    int reversePairs(vector<int>& nums) {
        int count=0;
        int n=nums.size()-1;
        mergesort(nums,0,n,count);
        return count;
    }
};








































// class Solution {
// public:
//     int reversePairs(vector<int>& nums) {
//         int count=0;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//               if ((long long)nums[i]>2LL*nums[j]) {
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };