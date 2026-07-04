class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l=nums.size();
        int first=0;
        int second=l-1;
        while(first<second){
            if(nums[first]%2!=0&&nums[second]%2==0){
                swap(nums[second],nums[first]);
            }
            if(nums[first]%2==0)first++;
            if(nums[second]%2!=0)second--;
        }
      return nums;
    }
};