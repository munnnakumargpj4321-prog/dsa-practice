 // this is going  to  be solve with the harse method 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>m;
        vector<int>ans;
        for(int  i=0;i<n;i++){
            int first=nums[i];
            int second=target-first;
            if(m.find(second)!=m.end()){
                ans.push_back(i);
                ans.push_back(m[second]);
                break;
            }
            m[first]=i;
           
          
        }
        return ans;
    }
};





// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n=nums.size();
//         // int i=0;
//         // int j=n-1;
//         bool found=false;
//         vector<int>ans;
//         for(int  i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(nums[i]+nums[j]==target){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     found=true;
//                     break;
//                 }
//             }
//             if(found==true){
//                 break;
//             }
//         }
//         return ans;
//     }
// };









//  // this is going  to  be solve with the harse method 
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n=nums.size();
//         int i=0;
//         int j=n-1;
//         vector<int>ans;
//         while(i<j){
//             int total=nums[i]+nums[j];
//             if(target<total){
//                 j--;
               
//             }
//             if(target>total){
//                 i++;
//             }
//             if(target==total){
//                ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//         return ans;
//     }
// };