class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long  reach=0;
        int pitch=0;
        int i=0;
        while(reach<n){
            if(i<nums.size()&&nums[i]<=reach+1){
                reach+=nums[i];
                i++;
            }else{
                pitch++;
                reach+=reach+1;
            }
        }
        return pitch;
    }
};

//  for(int i=0;i<n+1;i++){
//     sort(num.begin(),nume.end());
//     if(sorting[i]then0both(must )){
//         if(sum+=first){
//             reach+1;
//             i++;
//         }
//     }
//     long long first=0;
//     long long end= l-1;
//     while(first<end()){
//         if(fiurst<num[i]&&second(i-1)>=first*first){
//             if(both==second)return true;
//         }
//     }
//     vector<int>ans2;
//     vector<vector<int>>ans;
//     if(nums[i]!=){
//         if(npoth!===second){
//             ans2.push_back();
//         }
//     }
//     ans.push_back()   
//  and then return (first!=)?fiirst:second}