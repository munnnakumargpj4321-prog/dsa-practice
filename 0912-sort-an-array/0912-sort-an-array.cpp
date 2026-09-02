class Solution {
public:
    void sortmerge(vector<int>&nums,int mid,int start,int end){
        int i=start;
        int j=mid+1;
        int k=0;
        vector<int>ans(end-start+1);
        while(i<=mid&&j<=end){
            if(nums[i]<nums[j]){
                ans[k++]=nums[i++];
            }else{
                ans[k++]=nums[j++];
            }
        }
        while(i<=mid){
            ans[k++]=nums[i++];
        }
        while(j<=end){
            ans[k++]=nums[j++];
        }
        for(int i=start;i<=end;i++){
            nums[i]=ans[i-start];
        }

    }
    void mergesort(vector<int>&nums,int start,int end){
        if(start<end){
            int mid=start+(end-start)/2;
            mergesort(nums,start,mid);
            mergesort(nums,mid+1,end);
            sortmerge(nums,mid,start,end);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};