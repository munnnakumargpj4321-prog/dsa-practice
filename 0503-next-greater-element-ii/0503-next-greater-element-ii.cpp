class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            bool found=false;
            for(int j=i+1;j<i+n;j++){
                if(nums[j%n]>num){
                    ans.push_back(nums[j%n]);
                    found=true;
                    break;
                }
            }
            if(!found){
                ans.push_back(-1);
            }
        }
        return ans;
    }
};