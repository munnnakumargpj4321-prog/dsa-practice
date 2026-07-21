class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int r=nums.size();
        int c=nums[0].size();
        int st=0,en=c-1;
        while(st<r&&en>=0){
            if(target==nums[st][en]){
                return true;
            }else if(target<nums[st][en]){
                    en--;
            }else{
                    st++;
            }
            
        }
    return false;
    }
};






// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int l1=matrix.size();
//         int l2=matrix[0].size();
//         for(int i=0;i<l1;i++){
//             for(int j=0;j<l2;j++){
//                 if(target==matrix[i][j]){
//                     return true;;
//                 }
//             }
//         }
//         return false;
//     }
// };