class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=(nums.size()-1)/2;
        int j=nums.size()-1;
        vector<int>ans;
        for(int k=0;k<nums.size();k++){
            if(k%2==0){
                ans.push_back(nums[i]);
                i--;
            }else{
                ans.push_back(nums[j]);
                j--;
            }
        }
        for(int k=0;k<ans.size();k++){
            nums[k]=ans[k];
        }
    }
};