class Solution {
public:
    void fun(vector<int>& nums, int l, int r,int idx,int& mini,vector<int>temp,int sum){
        if(idx>=nums.size()){
            // sum=0;
            return;
        }
        temp.push_back(nums[idx]);
        sum+=nums[idx];
        if(temp.size()>=l&&temp.size()<=r){
            // int sum=0;
            // for(int i=0;i< temp.size();i++){
            //     sum+=temp[i];
            // }
            if(sum > 0) {
                mini = min(mini, sum);
            }
            // sum=0;
        }
        if(temp.size() < r) {
            fun(nums, l, r, idx+1, mini, temp,sum);
        }
        temp.pop_back();
    }
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int mini=INT_MAX;
        vector<int>temp;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            fun(nums,l,r,i,mini,temp,sum);
        }
        return (mini!=INT_MAX)?mini:-1;
    }
};