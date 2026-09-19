class Solution {
public:
    // void fun(vector<long long>&ans,vector<int>&nums,int idx,long long sum){
    //     for(int i=idx;i<nums.size();i++){
    //         sum+=nums[i];
    //         ans.push_back(sum);
    //         fun(ans,nums,i+1,sum);
    //         sum-=nums[i];

    //     }
    // }
    int rangeSum(vector<int>& nums, int n, int left, int right) {
     vector<long long>ans;
     long long sum=0;
    const long long modulo=1e9+7;
    //  fun(ans,nums,0,0);  
    for(int i=0;i<n;i++){
        long long sum2=0;
        for(int j=i;j<n;j++){
            sum2+=nums[j];
            ans.push_back(sum2);
        }
    }
     sort(ans.begin(),ans.end());
     for(int i=left-1;i<right;i++){
        sum =(sum+ans[i])%modulo;
     } 
     return sum;
     
    }
};