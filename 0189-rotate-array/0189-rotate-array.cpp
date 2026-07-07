class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//       int l=nums.size();
//       int i=0;
//       int j=l-1;
//       for(int i=0;i<l/2;i++){
//         int temp=nums[i];
//         nums[i]=nums[j-i];
//         nums[j-i]=temp;
//       }
//       for(int i=0;i<k;i++){
//         int temp=nums[i];
//         nums[i]=nums[k-i];
//         nums[k-i]=temp;
//       }
//       for(int i=k;i<l;i++){
//         int temp=nums[i];
//         nums[i]=nums[l-i];
//         nums[l-i]=temp;
//       }
//     }
// };