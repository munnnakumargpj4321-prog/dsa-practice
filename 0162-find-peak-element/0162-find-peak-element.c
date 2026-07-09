int findPeakElement(int* nums, int numsSize) {
    int s=0;
    int e=numsSize-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(nums[mid]<nums[mid+1]){
            s=mid+1;
        }else{
            e=mid;
        }
    }
    return s;
    
}