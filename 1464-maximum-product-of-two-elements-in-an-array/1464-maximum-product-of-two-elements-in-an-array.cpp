class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int l=nums.size();
      long long max1=0;
      long long max2=0;
        for(auto val:nums){
            if(val>max1){
                max2=max1;
                max1=val;
            }else if(val>max2){
                max2=val;
            }
        }
        return (max1-1)*(max2-1);
        
    }
};


// thsi is not work for all the time 


// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int l=nums.size();
//         int maxi=0;
//         for(int i=0;i<l;i++){
//             for(int j=i+1;j<l;j++){
//                 int n=(nums[i]-1)*(nums[j]-1);
//                 maxi=max(maxi,n);
//             }
//         }
//         return maxi;
        
//     }
// };
