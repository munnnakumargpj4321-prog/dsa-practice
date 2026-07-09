class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int l=nums.size();
        double count1=0;
        double count2=0;
        int candidate1=0;
        int candidate2=0;
        for(int i=0;i<l;i++){
            if(candidate1==nums[i]){
                count1++;
            }else if(candidate2==nums[i]){
                count2++;
            }else if(count1==0){
                candidate1=nums[i];
                count1=1;
            }else if(count2==0){
                candidate2=nums[i];
                count2=1;
            }else{
                count1--;
                count2--;
            }
        }
        count1=count2=0;
        for(int i=0;i<l;i++){
            if(nums[i]==candidate1)count1++;
            else if(nums[i]==candidate2)count2++;
        } 
        if(count1>l/3)ans.push_back(candidate1);     
        if(count2>l/3)ans.push_back(candidate2);    
        return ans;
    }
};